/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:19:55 by esuso-es          #+#    #+#             */
/*   Updated: 2022/12/28 19:22:20 by esuso-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_read_line(char *static_buff, int fd)
{
	char		*buff;
	size_t		read_cont; //contador de lo que lee

	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buff)
	{
		return (NULL);
	}
	read_cont = read(fd, buff, BUFFER_SIZE);
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
}
char	*get_next_line(int fd)
{
	int			i;
	static char	*static_buff;
	
	if (fd <= 0)
	{
		return (NULL);
	}
	if (!static_buff)
		{
			static_buff = malloc(sizeof(char) * 1);
			static_buff[0] = '\0';
		}
	ft_read_line(static_buff, fd)
}

int	main(void)
{
	int		fd;
	char	*a;
	char	*b;
	int		i;


	fd = open("read.txt", O_RDONLY);
	/*while (a)
	{
		a = get_next_line(fd);
		printf("<<<return>>>%d:%s\n", i, a);
		i++;
		free(a);
	}*/
	//printf("main_fd: %i\n", fd);
	a = get_next_line(fd);
	
	//printf("\n1: %s\n", a);
	//b = get_next_line(fd);
	//printf("\n1: %s\n", b);
	close(fd);
	return (0);
}
