/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:58:26 by medeana           #+#    #+#             */
/*   Updated: 2021/12/09 16:02:45 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list *list_a)
{
	while (list_a->next != NULL)
	{
		if (list_a->value > list_a->next->value)
			return (1);
		list_a = list_a->next;
	}
	return (0);
}
