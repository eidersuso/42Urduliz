/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eidersuso <eidersuso@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 08:53:08 by eidersuso         #+#    #+#             */
/*   Updated: 2022/09/19 21:06:04 by eidersuso        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
	{
		return (NULL);
	}
	list->content = content;
	list->next = NULL;
	return (list);
}

/*
int main(void)
{
    char    str[] = "lorem ipsum dolor sit";

    t_list  *elem;

    elem = ft_lstnew((void *)str);
    printf("Contenido (content) del nodo creado: %s\n", elem->content);
    printf("Siguiente nodo (next) del nodo creado: %s\n", elem->next);
}
*/