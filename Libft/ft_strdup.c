/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:22:29 by esuso-es          #+#    #+#             */
/*   Updated: 2022/09/13 19:28:05 by esuso-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*mem;

	mem = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!mem)
	{
		return (NULL);
	}
	ft_strlcpy(mem, s1, ft_strlen(s1) + 1);
	return (mem);
}

/*
int main(void)
{
   printf("%s\n", ft_strdup("hola Mundo!!")); // mi función 
   printf("%s\n", strdup("hola Mundo!!"));  //función original 
   return (0);
}
*/

/*
int	main(void)
{
	printf("%s\n", ft_strdup("Hello World!"));
	return (0);
}
*/
