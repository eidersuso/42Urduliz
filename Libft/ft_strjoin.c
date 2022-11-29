/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:04:16 by esuso-es          #+#    #+#             */
/*   Updated: 2022/09/15 15:50:37 by esuso-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strnew;
	size_t	sizeboth;

	sizeboth = ft_strlen(s1) + ft_strlen(s2) + 1;
	strnew = (char *)malloc(sizeboth);
	if (strnew == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(strnew, s1, ft_strlen(s1) + 1);
	ft_strlcat(strnew, s2, sizeboth);
	return (strnew);
}

/*
int  main(void)
{
   char    primero[] = "maricarmencita";
   char    segundo[] = "julianapepa";
 
   printf("%s\n", ft_strjoin(primero, segundo));
   return (0);
} 
*/