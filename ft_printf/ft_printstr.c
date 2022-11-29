/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:13:27 by esuso-es          #+#    #+#             */
/*   Updated: 2022/11/07 14:26:05 by esuso-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *s, int str_len)
{
	int	i;

	i = 0;
	if (!s)
	{
		str_len = ft_printstr("(null)", str_len);
		return (str_len);
	}
	while (s[i])
	{
		str_len = ft_printchar(s[i], str_len);
		i++;
	}
	return (str_len);
}
