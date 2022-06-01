/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:46:07 by medeana           #+#    #+#             */
/*   Updated: 2021/12/09 16:30:45 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **node)
{
	t_list	*tmp;

	if ((*node)->next != NULL)
	{
		tmp = (*node)->next;
		(*node)->next = (*node)->next->next;
		tmp->next = (*node);
		(*node) = tmp;
		tmp = NULL;
	}
	write(1, "sa\n", 3);
}

void	sb(t_list **node)
{
	t_list	*tmp;

	if ((*node)->next != NULL)
	{
		tmp = (*node)->next;
		(*node)->next = (*node)->next->next;
		tmp->next = (*node);
		(*node) = tmp;
		tmp = NULL;
	}
	write(1, "sb\n", 3);
}

void	ss(t_list **node_a, t_list **node_b)
{
	sa(node_a);
	sb(node_b);
}
