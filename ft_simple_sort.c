/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 11:22:58 by amacieje          #+#    #+#             */
/*   Updated: 2017/08/08 13:12:17 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_find_min_in_a(t_que *stacks, int *i)
{
	int			k;
	int			min;

	min = stacks->a[0];
	*i = 0;
	k = 0;
	while (++k <= stacks->ea)
		if (stacks->a[k] < min)
		{
			min = stacks->a[k];
			*i = k;
		}
	return (min);
}

static void		ft_find_min_by_top(t_que *stacks, int min)
{
	int			pb;

	pb = 0;
	while (stacks->a[0] != min)
	{
		ft_simultaneous_sort_v2(stacks);
		if (stacks->a[0] != min)
		{
			ft_interpret(stacks, "pb");
			write(1, "pb\n", 3);
			pb++;
		}
	}
	if (stacks->a[0] != min || pb > 0)
	{
		ft_interpret(stacks, "ra");
		write(1, "ra\n", 3);
	}
	while (pb > 0)
	{
		ft_interpret(stacks, "pa");
		write(1, "pa\n", 3);
		pb--;
	}
	if (stacks->a[0] != min)
	{
		ft_interpret(stacks, "rra");
		write(1, "rra\n", 4);
	}
}

static void		ft_find_min_by_bottom(t_que *stacks, int min)
{
	while (stacks->a[stacks->ea] != min)
	{
		ft_interpret(stacks, "rra");
		write(1, "rra\n", 4);
	}
	ft_interpret(stacks, "rra");
	write(1, "rra\n", 4);
}

void			ft_simple_sort(t_que *stacks)
{
	int			i;
	int			min;
//	int			k;

	ft_pre_sort(stacks);
/*	k = -1;
	while (++k < stacks->len)
		printf("a[%d] = %d\n", k, stacks->a[k]);*/
	ft_check_if_already_sorted(stacks, &stacks->len);
	while (stacks->len > 1 && stacks->ea > 1)
	{
		min = ft_find_min_in_a(stacks, &i);
		if (i < (stacks->len / 2))
			ft_find_min_by_top(stacks, min);
		else
			ft_find_min_by_bottom(stacks, min);
		ft_interpret(stacks, "pb");
		write(1, "pb\n", 3);
	}
	if (stacks->a[0] > stacks->a[1])
	{
		ft_interpret(stacks, "sa");
		write(1, "sa\n", 3);
	}
	while (stacks->eb != 0)
	{
		ft_interpret(stacks, "pa");
		write(1, "pa\n", 3);
	}
}
