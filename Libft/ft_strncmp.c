/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:21:14 by eidersuso         #+#    #+#             */
/*   Updated: 2022/09/12 14:10:09 by esuso-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*string1;
	unsigned char	*string2;
	size_t			i;

	string1 = (unsigned char *)str1;
	string2 = (unsigned char *)str2;
	i = 0;
	while ((string1[i] != '\0' || string2[i] != '\0') && (i < n))
	{
		if (string1[i] < string2[i])
		{
			return (string1[i] - string2[i]);
		}
		else if (string1[i] > string2[i])
		{
			return (string1[i] - string2[i]);
		}
		i++;
	}
	return (0);
}
