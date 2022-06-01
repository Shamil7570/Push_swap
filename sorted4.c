/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:48:40 by medeana           #+#    #+#             */
/*   Updated: 2021/12/09 16:32:10 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **list_a)
{
	t_list	*tail;
	t_list	*tmp;

	if ((*list_a) && (*list_a)->next)
	{
		tail = *list_a;
		while (tail != NULL)
		{
			if (tail->next->next == NULL)
			{
				tmp = tail->next;
				tail->next = NULL;
			}
			tail = tail->next;
		}
		tmp->next = *list_a;
		(*list_a) = tmp;
	}
	write(1, "rra\n", 4);
}

void	rrb(t_list **list_b)
{
	t_list	*tail;
	t_list	*tmp;

	if ((*list_b) && (*list_b)->next)
	{
		tail = *list_b;
		while (tail != NULL)
		{
			if (tail->next->next == NULL)
			{
				tmp = tail->next;
				tail->next = NULL;
			}
			tail = tail->next;
		}
		tmp->next = *list_b;
		(*list_b) = tmp;
	}
	write(1, "rrb\n", 4);
}

void	rrr(t_list **list_a, t_list **list_b)
{
	rra(list_a);
	rrb(list_b);
}
