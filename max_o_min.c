/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_o_min.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:52:16 by medeana           #+#    #+#             */
/*   Updated: 2021/12/09 16:04:12 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_value(t_list *list_a)
{
	int	min;

	min = INT_MAX;
	while (list_a)
	{
		if (list_a->value < min)
			min = list_a->value;
		list_a = list_a->next;
	}
	return (min);
}

int	max_value(t_list *list_a)
{
	int	max;

	max = INT_MIN;
	while (list_a)
	{
		if (list_a->value > max)
			max = list_a->value;
		list_a = list_a->next;
	}
	return (max);
}

int	min_val_flag(t_list *list_a)
{
	int	min;

	min = INT_MIN;
	while (list_a && list_a->flag != -1)
	{
		if (list_a->value < min)
			min = list_a->value;
		list_a = list_a->next;
	}
	return (min);
}

int	max_val_flag(t_list *list_a)
{
	int	max;

	max = INT_MIN;
	while (list_a && list_a->flag != -1)
	{
		if (list_a->value > max)
			max = list_a->value;
		list_a = list_a->next;
	}
	return (max);
}
