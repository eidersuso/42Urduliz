/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsign.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:17:16 by esuso-es          #+#    #+#             */
/*   Updated: 2022/11/07 14:26:10 by esuso-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsign(unsigned int n, int str_len)
{
	if (n > 9)
	{
		str_len = ft_printunsign(n / 10, str_len);
	}
	str_len = ft_printchar(n % 10 + '0', str_len);
	return (str_len);
}
