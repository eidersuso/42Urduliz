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

char	*ft_read_line(char *static_buff, int fd, int *free_willy)
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
	while (ft_find_jump(buff) == 0 && read_cont > 0)
	{
		read_cont = read(fd, buff, BUFFER_SIZE);
		if (read > 0)
			static_buff = ft_strjoin(static_buff, buff);
	}
	if (read_cont == 0)
	{
		(*free_willy)++;
	}
	free(buff);
	return (static_buff);
}

char	*ft_read_left(char *static_buff)
{
	int i;
	char *line;
	
	i = 0;
	//printf("+++Statica %s\n", static_buff);
	while (static_buff[i] && static_buff[i] != '\n')
	{
		//printf("+<+Entra\n");
		line[i] = static_buff[i];
		i++;
	}
	if (line[i] == '\0')
	{
		return (0);
	}
	printf("+++Statica %s\n", static_buff);
	printf("---- line: %s\n", line);
	line[i + 1] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*static_buff;
	char	*line;
	size_t		i;
	size_t		j;
	int			free_willy;

	free_willy = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		return (NULL);
	}
	if (!static_buff)
	{
		static_buff = malloc(sizeof(char) * 1);
		static_buff[0] = '\0';
	}
	//printf("+++++++ %s\n", static_buff);
	static_buff = ft_read_line(static_buff, fd, &free_willy);
	line = ft_read_left(static_buff);
	printf("+++++++ Statica abajo: %s\n", static_buff);
	printf("******* Linea abajo %s\n", line);
	
	if (!line)
	{
		free(static_buff);
		return (NULL);
	}
	i = ft_strlen(line);
	j = ft_strlen(static_buff);
	static_buff = ft_substr(static_buff, i, j - i);
	if (*static_buff == '\0' || free_willy > 0)
	{
		//printf("@@@@@you're freeeeeeeeeeeee to do what you want to do \n");
		free(static_buff);
		static_buff = NULL;
	}
	//printf("Static %s\n", static_buff);
	//printf("Line %s\n", line);
	return (line);
}

int	main(void)
{
	char *line;
	int fd;

	fd = open("read.txt", O_RDONLY);

	while(1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break;
		printf("y yo me muerrroooooooooo: %s", line);
		free(line);
	}
	close(fd);
	return (0);
}
