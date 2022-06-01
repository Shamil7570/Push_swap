/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:48:21 by medeana           #+#    #+#             */
/*   Updated: 2021/12/09 16:31:37 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **list_a)
{
	t_list	*last;
	t_list	*first;

	if (!(*list_a) || !(*list_a)->next)
		return ;
	last = *list_a;
	first = (*list_a)->next;
	while ((*list_a)->next)
		*list_a = (*list_a)->next;
	(*list_a)->next = last;
	last->next = NULL;
	*list_a = first;
	write(1, "ra\n", 3);
}

void	rb(t_list **list_b)
{
	t_list	*last;
	t_list	*first;

	if (!(*list_b) || !(*list_b)->next)
		return ;
	last = *list_b;
	first = (*list_b)->next;
	while ((*list_b)->next)
		*list_b = (*list_b)->next;
	(*list_b)->next = last;
	last->next = NULL;
	*list_b = first;
	write(1, "rb\n", 3);
}

void	rr(t_list **list_a, t_list **list_b)
{
	ra(list_a);
	rb(list_b);
}
