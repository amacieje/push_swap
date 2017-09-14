/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_if_already_sorted.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 11:30:51 by amacieje          #+#    #+#             */
/*   Updated: 2017/08/03 11:32:29 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			ft_check_if_already_sorted(t_que *stacks, int *len)
{
	int			*a;
	int			i;
	int			sorted;

	sorted = 1;
	a = stacks->a;
	i = 0;
	while (i < *len)
	{
		if (a[i] > a[i + 1])
			sorted = 0;
		i++;
	}
	if (sorted == 1)
	{
		*len = 0;
		stacks->ea = 0;
		stacks->len = 0;
	}
}
