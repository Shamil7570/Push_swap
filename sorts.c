/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:07:00 by medeana           #+#    #+#             */
/*   Updated: 2021/12/09 16:36:19 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a_to_b(t_list **list_a, t_list **list_b, t_value **v)
{
	(*v)->max = max_value(*list_a);
	(*v)->next = min_value(*list_a);
	(*v)->mid = (*v)->max / 2 + (*v)->next + 7;
	(*v)->flag = (*list_a)->flag;
	while ((*list_a) && (*list_a)->flag == (*v)->flag)
	{
		(*list_a)->flag++;
		if ((*list_a)->value <= (*v)->mid)
			pb(list_a, list_b);
		else
			ra(list_a);
	}
}

void	b_to_a(t_list **list_a, t_list **list_b, t_value **v)
{
	sort_value(v, list_b);
	while ((*list_b) && (*list_b)->flag == (*v)->flag)
	{
		(*list_b)->flag++;
		if ((*list_b)->value == (*v)->next)
		{
			(*list_b)->flag = -1;
			pa(list_a, list_b);
			ra(list_a);
			(*v)->next++;
		}
		else if ((*list_b)->value >= (*v)->mid)
		{
			(*list_b)->flag++;
			pa(list_a, list_b);
		}
		else
			rb(list_b);
	}
}

void	sort_value(t_value **v, t_list **list_b)
{
	(*v)->flag = (*list_b)->flag;
	(*v)->max = max_value(*list_b);
	(*v)->next = min_value(*list_b);
	(*v)->mid = ((*v)->max - (*v)->next) / 2 + (*v)->next + 3;
}
