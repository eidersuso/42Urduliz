/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:25:06 by esuso-es          #+#    #+#             */
/*   Updated: 2022/11/07 14:24:15 by esuso-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, char const str, int str_len)
{
	if (str == 'c')
		str_len = ft_printchar(va_arg(args, int), str_len);
	else if (str == 's')
		str_len = ft_printstr(va_arg(args, char *), str_len);
	else if (str == 'i' || str == 'd')
		str_len = ft_printnmbr(va_arg(args, int), str_len);
	else if (str == 'u')
		str_len = ft_printunsign(va_arg(args, unsigned int), str_len);
	else if (str == 'x' || str == 'X')
		str_len = ft_printhexa(va_arg(args, unsigned int), str, str_len);
	else if (str == 'p')
	{
		str_len = ft_printstr("0x", str_len);
		str_len = ft_printhexa(va_arg(args, size_t), str, str_len);
	}
	else if (str == '%')
		str_len = ft_printchar('%', str_len);
	return (str_len);
}
