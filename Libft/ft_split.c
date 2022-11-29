/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:35:27 by esuso-es          #+#    #+#             */
/*   Updated: 2022/09/16 18:49:09 by esuso-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_times_split(char const *s, char c)
{
	size_t	times;
	int		cut;

	times = 0;
	cut = 0;
	while (*s)
	{
		if (*s != c && cut == 0)
		{
			cut = 1;
			times++;
		}
		else if (cut == 1 && *s == c)
		{
			cut = 0;
		}
		s++;
	}
	return (times);
}

static size_t	ft_until_cut(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
	{
		len++;
	}
	return (len);
}

static char	*ft_copy_str(const char *s, size_t len)
{
	char	*str;
	size_t	i;

	str = malloc(len + 1);
	i = 0;
	while (len--)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**strnew;
	size_t	size;
	size_t	cut;
	size_t	i;

	if (!s)
		return (NULL);
	size = ft_times_split(s, c);
	strnew = malloc(sizeof(char *) * (size + 1));
	if (!strnew)
		return (NULL);
	i = 0;
	while (i < size)
	{
		cut = ft_until_cut(s, c);
		if (cut)
		{
			strnew[i] = ft_copy_str(s, cut);
			i++;
		}
		s = s + cut + 1;
	}
	strnew[i] = 0;
	return (strnew);
}
