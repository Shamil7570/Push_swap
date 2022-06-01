/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:32:31 by medeana           #+#    #+#             */
/*   Updated: 2021/12/09 16:26:43 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_list{
	int				id;
	int				value;
	int				flag;

	struct s_list	*next;
}	t_list;

typedef struct s_value{
	int	next;
	int	max;
	int	mid;
	int	flag;
	int	count;
}	t_value;

t_list		*create_node(int id, char **av, int ac);
void		search_for_replays(t_list *node);
long int	ft_atoi(const char *str);
long int	ft_atoippart(const char *s, long int *i, long int *r, long int *m);
t_list		*init_a(int ac, char **av);
void		sa(t_list **node);
void		sb(t_list **node);
void		ss(t_list **node_a, t_list **node_b);
void		pa(t_list **list_a, t_list **list_b);
void		pb(t_list **list_a, t_list **list_b);
void		ra(t_list **node_a);
void		rb(t_list **list_b);
void		rr(t_list **list_a, t_list **list_b);
void		rra(t_list **list_a);
void		rrb(t_list **list_b);
void		rrr(t_list **list_a, t_list **list_b);
int			max_value(t_list *list_a);
int			min_value(t_list *list_a);
void		sort_value(t_value **v, t_list **list_b);
void		a_to_b(t_list **list_a, t_list **list_b, t_value **v);
void		b_to_a(t_list **list_a, t_list **list_b, t_value **v);
void		sort_big(t_list **list_a, t_list **list_b, t_value **val);
int			min_val_flag(t_list *list_a);
int			max_val_flag(t_list *list_a);
int			a_to_b2(t_list **a, t_list **b, t_value **v);
void		sort_mini(t_list **list_a, t_list **list_b, int ac);
int			is_sorted(t_list *list_a);
void		sort_three(t_list **list_a);
void		sort_five(t_list **list_a, t_list **list_b);
void		sort_four(t_list **list_a, t_list **list_b);

#endif