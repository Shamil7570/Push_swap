/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:54:32 by medeana           #+#    #+#             */
/*   Updated: 2021/12/09 16:01:18 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_atoippart(const char *s, long int *i, long int *r, long int *m)
{
	if (s[*i] == '-' || s[*i] == '+')
	{
		if (s[*i] == '-')
			(*m) *= -1;
		(*i)++;
	}
	while (s[*i] >= '0' && s[*i] <= '9')
	{
		(*r) = ((*r) * 10) + (s[*i] - '0');
		(*i)++;
	}
	if (s[*i] >= 'A' && s[*i] <= 'z')
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	return ((*r));
}

long int	ft_atoi(const char *s)
{
	long int	i;
	long int	min;
	long int	res;
	long int	k;

	min = 1;
	res = 0;
	i = 0;
	k = 0;
	while ((s[i] >= 0x09 && s[i] <= 0x0D) || (s[i] == ' '))
		i++;
	res = ft_atoippart(s, &i, &res, &min);
	k = res * min;
	if (k > 2147483647 || k < -2147483648)
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	return (res * min);
}
