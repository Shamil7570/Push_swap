/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:13:04 by medeana           #+#    #+#             */
/*   Updated: 2021/12/09 16:01:47 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*init_a(int ac, char **av)
{
	t_list	*list_a;
	t_list	*tmp;
	int		i;

	i = 1;
	list_a = create_node(i, av, ac);
	tmp = list_a;
	search_for_replays(list_a);
	return (tmp);
}
