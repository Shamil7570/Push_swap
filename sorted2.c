/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:52:41 by medeana           #+#    #+#             */
/*   Updated: 2021/12/09 16:31:20 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **list_a, t_list **list_b)
{
	t_list	*first;

	if ((*list_b) != NULL)
	{
		first = (*list_b);
		(*list_b) = (*list_b)->next;
		first->next = (*list_a);
		(*list_a) = first;
	}
	write(1, "pa\n", 3);
}

void	pb(t_list **list_a, t_list **list_b)
{
	t_list	*first;

	if ((*list_a) != NULL)
	{
		first = (*list_a);
		(*list_a) = (*list_a)->next;
		first->next = (*list_b);
		(*list_b) = first;
	}
	write(1, "pb\n", 3);
}
