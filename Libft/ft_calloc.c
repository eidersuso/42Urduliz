/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuso-es <esuso-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:25:15 by esuso-es          #+#    #+#             */
/*   Updated: 2022/09/13 16:40:06 by esuso-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*mem;
	size_t	i;

	i = 0;
	mem = malloc (count * size);
	if (mem == NULL)
	{
		return (0);
	}
	while (i < count * size)
	{
		mem[i] = 0;
		i++;
	}
	return ((void *)mem);
}

/*
int main(void)
{
   printf("\n---- calloc ----\n");
   int *calloc_test;
   calloc_test = (int *)ft_calloc(6, sizeof(int));
   printf("Calloc an array of 6 int\n    ");
   for(int i = 0; i < 6; i++)
       printf("%d ", calloc_test[i]);
   printf("\n");
   free(calloc_test);
}
*/