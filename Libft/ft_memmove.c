/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:32:58 by eidersuso         #+#    #+#             */
/*   Updated: 2022/09/13 16:39:41 by esuso-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*destination;
	unsigned const char		*source;
	size_t					i;

	destination = dst;
	source = src;
	i = 0;
	if (dst == 0 && src == 0)
		return (dst);
	if (source > destination)
	{
		while (i < len)
		{
			destination[i] = source[i];
			i++;
		}
	}
	else
	{
		while (len--)
			destination[len] = source[len];
	}
	return (dst);
}

/*
int main ()
{
   char dest[] = "tutuque";
   const char src[]  = "hola";


   printf("Before memmove dest = %s src = %s\n", dest, src);
   ft_memmove(dest, src, 8);
   printf("After memmove dest = %s src = %s\n", dest, src);
   printf("NULL: %s\n", ft_memmove(((void *)0), ((void *)0), 5));

   return(0);
}

*/