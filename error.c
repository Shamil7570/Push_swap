/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:36:00 by medeana           #+#    #+#             */
/*   Updated: 2021/12/09 16:01:02 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	search_for_replays(t_list *node)
{
	t_list	*start;
	t_list	*search;

	start = node;
	while (start)
	{
		search = node;
		while (search)
		{
			if ((start->value == search->value)
				&& (start->id != search->id))
			{
				write(1, "Error\n", 6);
				exit(0);
			}
			search = search->next;
		}
		start = start->next;
	}
}
