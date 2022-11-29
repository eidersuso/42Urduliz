/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:00:45 by esuso-es          #+#    #+#             */
/*   Updated: 2022/09/12 20:05:45 by esuso-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dest;
	size_t	source;

	i = 0;
	dest = ft_strlen(dst);
	source = ft_strlen(src);
	if (dstsize <= dest || dstsize == 0)
	{
		return (dstsize + source);
	}
	while (i < (dstsize - dest - 1) && src[i] != '\0')
	{
		dst[dest + i] = src[i];
		i++;
	}
	dst[dest + i] = '\0';
	return (dest + source);
}
