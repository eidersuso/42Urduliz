/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:16:10 by esuso-es          #+#    #+#             */
/*   Updated: 2022/11/07 14:25:15 by esuso-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(char const *str, ...);
int	ft_format(va_list args, char const str, int str_len);
int	ft_printchar(char c, int str_len);
int	ft_printstr(char *s, int str_len);
int	ft_printnmbr(int n, int str_len);
int	ft_printunsign(unsigned int n, int str_len);
int	ft_printhexa(size_t n, char str, int str_len);

#endif
