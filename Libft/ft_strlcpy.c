/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:10:34 by eidersuso         #+#    #+#             */
/*   Updated: 2022/09/26 12:37:14 by esuso-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (dstsize == 0)
	{
		return (srclen);
	}
	while (i < (dstsize - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}

/*
int main()
{
   char dest[] = "stuf";
   char source[] = "world!hj";
   //strlcpy(var1, var2, 6);
   printf("original: %lu\n", strlcpy(dest, source, 5));
   printf("dest: %s\n", dest);
   printf("source: %s\n", source);
   char dest2[] = "stuf";
   char source2[] = "world!hj";
   printf("la mia: %lu\n", ft_strlcpy(dest2, source2, 5));
   printf("dest: %s\n", dest2);
   printf("source: %s\n", source2);

}
*/

/*
int	main()
{
	char dest[] = "stuf"; 
	printf("original %lu\n", strlcpy(dest, "lorem ipsum dolor sit amet", 0));
   printf("dest = %s\n", dest);
	char dest1[] = "stuf";
	printf("la mia %zu\n", ft_strlcpy(dest1, "lorem ipsum dolor sit amet", 0));
   printf("dest1 = %s\n", dest1);
}
*/
