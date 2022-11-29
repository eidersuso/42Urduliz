/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:57:59 by esuso-es          #+#    #+#             */
/*   Updated: 2022/09/15 17:57:45 by esuso-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charcheck(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	size_t		k;
	char		*strnew;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while ((s1[i]) && (ft_charcheck(s1[i], set)))
	{
		i++;
	}
	j = ft_strlen(s1);
	while ((j > i) && (ft_charcheck(s1[j - 1], set)))
	{
		j--;
	}
	strnew = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!strnew)
		return (NULL);
	k = 0;
	while (i < j)
		strnew[k++] = s1[i++];
	strnew[k] = 0;
	return (strnew);
}

/*
i = principio;
j = final;
*/