/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:19:55 by esuso-es          #+#    #+#             */
/*   Updated: 2022/12/28 18:30:33 by esuso-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

                                                                                                                                                                                                                                                                                      

char	*get_next_line(int fd)
{
	char		*buff;
	int			i;
	size_t		read_line_count;
	static char	*static_buff;

	i = 0;
	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	read_line_count = read(fd, buff, BUFFER_SIZE);
	if (fd <= 0)
	{
		return (NULL);
	}
	if (!buff)
	{
		return (NULL);
	}
	while (buff[i] && buff[i] != '\n')  // Identificar la línea hasta salto de linea y la escribe.
	{
		if (!static_buff)
		{
			static_buff = malloc(sizeof(char) * 1);
			static_buff[0] = '\0';
		}
		write(1, &buff[i], 1);
		i++;
		if (!buff[i]) // si el BUFFER_SIZE es menor que el tamaño de la línea, hace falta crear una condición para decirle que siga leyendo. Aquí es donde saca la frase entera independientemente del num q le pongamos al BUFFER_SIZE
		{
			i = 0;
			read_line_count = read(fd, buff, BUFFER_SIZE);
		}
	}
	return (buff);
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
