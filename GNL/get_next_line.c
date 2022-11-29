/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:19:55 by esuso-es          #+#    #+#             */
/*   Updated: 2022/11/22 10:46:56 by esuso-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*buff;
	int			i;
	size_t		read_line_count;

	printf("gnl_fd: %i\n", fd);
	i = 0;
	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	printf("gnl_buff: %s\n", buff);
	printf("gnl_i: %i\n", i);
	read_line_count = read(fd, buff, BUFFER_SIZE);
	if (fd <= 0)
	{
		return (NULL);
	}
	if (!buff)
	{
		return (NULL);
	}
	while (buff[i] && buff[i] != '\n')
	{
		if (buff[i] == '\n')
		{
			return (0);
		}
		write(1, &buff[i], 1);
		i++;
		if (!buff[i]) // si el BUFFER_SIZE es menor que el tamaño de la línea, hace falta crear una condición para decirle que si 
		{
			i = 0;
			read_line_count = read(fd, buff, BUFFER_SIZE);
		}
	}
	return (0);
}

int	main(void)
{
	int		fd;
	char	*a;

	fd = open("read.txt", O_RDONLY);
	printf("main_fd: %i\n", fd);
	a = get_next_line(fd);
	printf("\n1: %s\n", a);
	//close(fd);
	return (0);
}
