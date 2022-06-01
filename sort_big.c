/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:58:05 by medeana           #+#    #+#             */
/*   Updated: 2021/12/09 16:28:37 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big(t_list **list_a, t_list **list_b, t_value **val)
{
	a_to_b(list_a, list_b, val);
	while (*list_b)
		b_to_a(list_a, list_b, val);
	while ((*list_a)->flag != -1)
	{
		(*val)->flag = (*list_a)->flag;
		(*val)->count = a_to_b2(list_a, list_b, val);
		while ((*val)->count-- > 0)
			ra(list_a);
		while ((*list_b))
			b_to_a(list_a, list_b, val);
	}
}

int	a_to_b2(t_list **list_a, t_list **list_b, t_value **v)
{
	int	i;

	i = 0;
	(*v)->max = max_val_flag(*list_a);
	(*v)->next = min_val_flag(*list_a);
	(*v)->mid = ((*v)->max - (*v)->next) / 2 + (*v)->next;
	(*v)->flag = (*list_a)->flag;
	while ((*v)->flag == (*list_a)->flag)
	{
		(*list_a)->flag++;
		if ((*list_a)->value <= (*v)->mid)
			pb(list_a, list_b);
		else
		{
			ra(list_a);
			i++;
		}
	}
	return (i);
}
