/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eidersuso <eidersuso@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 07:14:48 by eidersuso         #+#    #+#             */
/*   Updated: 2022/09/19 07:31:23 by eidersuso        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*strnew;

	if (!s)
	{
		return (NULL);
	}
	i = 0;
	strnew = malloc(ft_strlen(s) + 1);
	if (strnew == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		strnew[i] = (*f)(i, s[i]);
		i++;
	}
	strnew[i] = '\0';
	return (strnew);
}
