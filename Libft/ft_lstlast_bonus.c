/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eidersuso <eidersuso@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:36:09 by eidersuso         #+#    #+#             */
/*   Updated: 2022/09/20 10:38:34 by eidersuso        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*end;

	if (!lst)
	{
		return (NULL);
	}	
	end = lst;
	while (end->next != NULL)
	{
		end = end->next;
	}
	return (end);
}
