/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:05:45 by esuso-es          #+#    #+#             */
/*   Updated: 2022/11/07 14:25:02 by esuso-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		str_len;
	int		i;

	va_start(args, str);
	str_len = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != '%')
			str_len = ft_printchar(str[i], str_len);
		if (str[i] == '%')
		{			
			str_len = ft_format(args, str[++i], str_len);
		}
		i++;
	}
	va_end(args);
	return (str_len);
}

/*
int	main(void)
{
		int		i;
		int		j;
		int		a;
		int		b;
		char	*str;

		a = -325;
		b = -325;
		str = "Hola que tal";
		
		i = ft_printf("mi printf es %c\n", 'e');
		j = printf("su printf es %c\n", 'd');
		printf("El tamaño de mi printf es %i\n", i);
		printf("El tamaño de su printf es %i\n", j);
		a = ft_printf("mi string es: %s\n", str);
		b = printf("su string es: %s\n", str);
		printf("a es: %i\nb es: %i\n", a, b);
		
		ft_printf("el valor de a es: %u\n", a);
		printf("el valor de b es: %u\n", b);
		
		return (0);
		
}
*/
