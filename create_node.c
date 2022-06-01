/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:37:33 by medeana           #+#    #+#             */
/*   Updated: 2021/12/09 15:59:36 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*create_node(int i, char **av, int ac)
{
	t_list	*node;
	t_list	*tmp;

	node = (t_list *)malloc(sizeof(t_list));
	tmp = node;
	node->value = ft_atoi(av[i]);
	node->id = 1;
	node->flag = 0;
	node->next = NULL;
	while (ac > 2)
	{
		i++;
		node->next = (t_list *)malloc(sizeof(t_list));
		node = node->next;
		node->value = ft_atoi(av[i]);
		node->id = i;
		node->flag = 0;
		node->next = NULL;
		ac--;
	}
	return (tmp);
}
