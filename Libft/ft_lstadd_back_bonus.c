/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eidersuso <eidersuso@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:42:22 by eidersuso         #+#    #+#             */
/*   Updated: 2022/09/20 11:10:13 by eidersuso        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if (!new)
	{
		return ;
	}
	if (!*lst)
	{
		*lst = new;
	}
	else
	{
		if (last == NULL)
		{
			return ;
		}
		last->next = new;
	}
}
