/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:10:47 by esuso-es          #+#    #+#             */
/*   Updated: 2022/11/07 14:24:37 by esuso-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexa(size_t n, char str, int str_len)
{	
	if (n >= 16)
	{
		str_len = ft_printhexa(n / 16, str, str_len);
	}
	if (str == 'x' || str == 'p')
	{
		str_len = ft_printchar("0123456789abcdef"[n % 16], str_len);
	}
	if (str == 'X')
	{
		str_len = ft_printchar("0123456789ABCDEF"[n % 16], str_len);
	}
	return (str_len);
}
