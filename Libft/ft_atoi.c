/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:52:04 by esuso-es          #+#    #+#             */
/*   Updated: 2022/09/26 16:42:37 by esuso-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	cont;

	i = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	cont = 1;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
		{
			cont = cont * -1;
		}
		i++;
	}
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
			num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * cont);
}

/*
int	main()
{
	int		val;
	char	str[20];

	strcpy(str, "98993489");
	val = atoi(str);
	printf("ORIGINAL: String value = %s, Int value = %d\n", str, val);
	strcpy(str, "tutorialspoint.com");
	val = atoi(str);
	printf("ORIGINAL: String value = %s, Int value = %d\n", str, val);
	return (0);
	
	int		val2;
	char	str2[20];

	strcpy(str2, "98993489");
	val2 = ft_atoi(str2);
	printf("MIA: String value = %s, Int value = %d\n", str2, val2);
	strcpy(str2, "tutorialspoint.com");
	val2 = ft_atoi(str2);
	printf("MIA: String value = %s, Int value = %d\n", str2, val2);
	return (0);
}
*/
