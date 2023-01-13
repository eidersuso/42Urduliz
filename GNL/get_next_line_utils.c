/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:20:50 by esuso-es          #+#    #+#             */
/*   Updated: 2023/01/09 17:28:15 by esuso-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str) // longitud str
{
	size_t	i;

	i = 0;
	if (!str)
	{
		return (0);
	}
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char *s1, char *s2) // une el segundo string al primero y lo devuelve en un string(malloc)
{
	size_t	i;
	size_t	j;
	char	*new_str;
	

	new_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (new_str == NULL)
		return (0);
	i = 0;
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		new_str[i + j] = s2[j];
		j++;
	}
	new_str[i + j] = '\0';
	//free(s1);
	//free(s2);
	return (new_str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len) // copia una cadena desde el comienzo asignado (start) hasta donde yo quiera(len)
{
	size_t	i;
	char	*new_str;

	if (!s)
	{
		return (NULL);
	}
	if (start > ft_strlen(s))
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	new_str = (char *)malloc(sizeof(char) * len + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		new_str[i] = s[start];
		start++;
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
char	*ft_strdup(const char *s) //duplica la cadena en un nuevo string(malloc)
{
	int		i;
	char	*new_str;

	new_str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!new_str)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';
	new_str[i] = s[i];
	return (new_str);
}
*/ //Esta no nos va a hacer falta.

 int	ft_find_jump(char *buff)//Busca cuando en el string buff hay un salto de línea
{
	int	i;

	if (!buff)
	{
		return (0);
	}
	i = 0;
	while (buff[i] != '\0')
	{
		if (buff[i] == '\n')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strchr(char *str, int c, int free_willy) // Devuelve el string desde el caracter seleccionado.
{
	int	i;

	i = 0;
	if (!str)
	{
		return (NULL);
	}
	if (free_willy == 1 && str)
	{
		return (str);
	}
	while (str[i])
	{
		if (str[i] == (char)c)
		{
			//return ((char *)&str[i]);esto devuelve la funcion ella misma
			return(ft_substr(str, 0, i + 1)); //metemos el string, la posicion de inicio es la 0 y la posición de c, que quereos que sea el salto de línea (la longitud que queremos que imprima)
		}
		i++;
	}
	return (NULL);
}

/*
int main(void)
{
	// char *str1;
	// char *s1;
	// char *s2;
	// char *str2;
	// char *str3;
	// char *str4;
	//char *str5;
	char *str6;
	//int	c;

	// str1 = "Hola qué tal ";
	// str2 = "estás";
	// s1 = malloc(sizeof(char) *  )
	// str3 = "no se nada";
	// str4 = str3;
	//str5 = "Buenasnas taardes";
	str6 ="Hola";
	//printf("%s", str6);
	//ft_find_jump(str6);
	//c = '\n';
	// printf("Qué me devuelve srtjoin: %s\n", ft_strjoin(str1, str2));
	// printf("Qué me devuelves: %s\n", ft_substr(str3, 0, 5));
	// printf("qué devuelve strdup:%s\n", ft_strdup(str4));
	//printf("qué devuelve strchr:%s-\n", ft_strchr(str5, c));
	printf("qué me devuelve find_jump:%d\n", ft_find_jump(str6));
	//printf("Qué me devuelve srtjoin: %s\n", ft_strjoin(ft_strdup("holi que tal"), ft_strdup("estas")));
	// printf("Qué me devuelves: %s\n", ft_substr(str3, 0, 5));
	// printf("qué devuelve strdup:%s\n", ft_strdup(str4));
	// printf("qué devuelve strchr:%s\n", ft_strchr(str5, c));
}
*/