/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 10:47:35 by eidersuso         #+#    #+#             */
/*   Updated: 2022/09/12 20:08:37 by esuso-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/*
int main () {


    char str[] = "hola";
    int c = 2;


    ft_bzero(str, c);
    printf("String after first |%d| bytes changes to 0 is - |%s|\n", c, str);


   return(0);
}
*/