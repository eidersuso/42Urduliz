/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnmbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:14:44 by esuso-es          #+#    #+#             */
/*   Updated: 2022/11/07 14:25:56 by esuso-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnmbr(int n, int str_len)
{
	if (n == -2147483648)
	{
		str_len = ft_printstr("-2147483648", str_len);
		return (str_len);
	}
	else
	{
		if (n < 0)
		{
			str_len = ft_printchar('-', str_len);
			n = n * -1;
		}
		if (n > 9)
		{
			str_len = ft_printnmbr(n / 10, str_len);
		}
		str_len = ft_printchar(n % 10 + '0', str_len);
	}
	return (str_len);
}
