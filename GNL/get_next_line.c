/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:19:55 by esuso-es          #+#    #+#             */
/*   Updated: 2023/01/09 19:09:12 by esuso-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_line(char *static_buff, int fd)
{
	char		*buff;
	size_t		read_cont; //contador de lo que lee
	
	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	
	if (!buff)
	{
		return (NULL);
	}
	read_cont = read(fd, buff, BUFFER_SIZE);
	buff[read_cont] = '\0';
	if (read_cont > 0)
	{
		static_buff = ft_strjoin(static_buff, buff);
	}
	while (ft_find_jump(buff) == 0 && read_cont >= 0)
	{
		read_cont = read(fd, buff, BUFFER_SIZE);
		static_buff = ft_strjoin(static_buff, buff);
	}
	free(buff);
	return (static_buff);
}
char	*get_next_line(int fd)
{
	static char	*static_buff;
	char	*line;
	size_t		i;
	size_t		j;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		return (NULL);
	}
	if (!static_buff)
	{
		static_buff = malloc(sizeof(char) * 1);
		static_buff[0] = '\0';
	}
	static_buff = ft_read_line(static_buff, fd);
	printf("static_buff %s\n", static_buff);
	line = ft_strchr(static_buff, '\n');
	if (line[0] == '\0')
	{
		free(line);
		return (NULL);
	}
	i = ft_strlen(line);
	j = ft_strlen(static_buff);
	static_buff = ft_substr(static_buff, i, j - i);
	if (*static_buff == '\0')
	{
		free(static_buff);
		static_buff = NULL;
	}
	printf("Static %s\n", static_buff);
	printf("Line %s\n", line);
	printf("direccion static buff = %p\n", static_buff);
	printf("direccion line = %p\n", line);
	return (line);
}

int	main(void)
{
	int		fd;
	char	*a;
	int		i;
	i = 0;
	fd = open("read.txt", O_RDONLY);
	while (1)
	{
		a = get_next_line(fd);
		if (a == NULL)
		{
			break;
		}
		printf("<<<return>>>%d:%s\n", i, a);
		i++;
		free(a);
	}
	//printf("main_fd: %i\n", fd);
	//a = get_next_line(fd);
	
	//printf("\n1: %s\n", a);
	//b = get_next_line(fd);
	//printf("\n1: %s\n", b);
	close(fd);
	return (0);
}
