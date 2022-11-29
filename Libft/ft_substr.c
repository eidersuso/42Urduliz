/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:19:52 by esuso-es          #+#    #+#             */
/*   Updated: 2022/09/15 14:10:40 by esuso-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str1;

	if (s == NULL)
	{
		return (NULL);
	}
	if (len > ft_strlen(s))
	{
		len = ft_strlen(s);
	}
	str1 = (char *)malloc((len + 1) * (sizeof(char)));
	if (start > ft_strlen(s))
	{
		*str1 = '\0';
		return (str1);
	}
	if (str1 == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(str1, &s[start], len + 1);
	return (str1);
}
/*
int	main(void)
{
	char *s;

	s = "hola que tal";
	printf("%s\n", ft_substr(s, 5, 3));
}
*/
