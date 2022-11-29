/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:47:17 by esuso-es          #+#    #+#             */
/*   Updated: 2022/09/16 17:49:14 by esuso-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n < 0 || !n)
	{
		i++;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	i;
	char	*strnew;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_len(n);
	strnew = malloc(len + 1);
	if (!strnew)
		return (NULL);
	strnew[len] = '\0';
	i = 0;
	if (n < 0)
	{
		strnew[0] = '-';
		n = n * -1;
		i++;
	}
	while (len-- > i)
	{
		strnew[len] = (n % 10) + '0';
		n = n / 10;
	}
	return (strnew);
}
