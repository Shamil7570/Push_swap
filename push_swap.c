/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:32:11 by medeana           #+#    #+#             */
/*   Updated: 2021/12/09 16:39:44 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_value	*val;
	t_list	*list_a;
	t_list	*list_b;
	int		i;

	if (ac > 1)
	{	
		list_b = NULL;
		val = malloc(sizeof(t_value));
		list_a = init_a(ac, av);
		i = is_sorted(list_a);
		if (i == 0 && list_b == NULL)
			exit(0);
		if (ac == 2)
			exit(0);
		else if (ac <= 6)
			sort_mini(&list_a, &list_b, ac);
		else
			sort_big(&list_a, &list_b, &val);
		exit(0);
	}
	else
		exit(0);
}
