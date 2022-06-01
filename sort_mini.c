/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_mini.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:23:35 by medeana           #+#    #+#             */
/*   Updated: 2021/12/09 16:30:16 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_mini(t_list **list_a, t_list **list_b, int ac)
{
	if (ac == 3)
	{
		if ((*list_a)->value > (*list_a)->next->value)
			sa(list_a);
	}
	else if (ac == 4)
		sort_three(list_a);
	else if (ac == 5)
		sort_four(list_a, list_b);
	else if (ac == 6)
		sort_five(list_a, list_b);
}

void	sort_three(t_list **list_a)
{
	if ((*list_a)->value > (*list_a)->next->value
		&& (*list_a)->value < (*list_a)->next->next->value)
		sa(list_a);
	else if ((*list_a)->value > (*list_a)->next->value
		&& (*list_a)->next->value > (*list_a)->next->next->value)
	{
		sa(list_a);
		rra(list_a);
	}
	else if ((*list_a)->next->next->value > (*list_a)->next->value
		&& ((*list_a)->next->next->value < (*list_a)->value))
		ra(list_a);
	else if ((*list_a)->next->next->value > (*list_a)->value
		&& (*list_a)->next->next->value < (*list_a)->next->value)
	{
		sa(list_a);
		ra(list_a);
	}
	else if ((*list_a)->value > (*list_a)->next->next->value
		&& (*list_a)->value < (*list_a)->next->value)
		rra(list_a);
}

void	sort_four(t_list **list_a, t_list **list_b)
{
	int	min;

	min = min_value(*list_a);
	while ((*list_a)->value != min)
		ra(list_a);
	pb(list_a, list_b);
	sort_three(list_a);
	pa(list_a, list_b);
}

void	sort_five(t_list **list_a, t_list **list_b)
{
	int	min;

	min = min_value(*list_a);
	while ((*list_a)->value != min)
		ra(list_a);
	pb(list_a, list_b);
	sort_four(list_a, list_b);
	pa(list_a, list_b);
}
