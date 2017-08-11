/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 12:10:43 by amacieje          #+#    #+#             */
/*   Updated: 2017/08/11 14:30:20 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		ft_swap_and_rotate_b(t_que *stacks)
{
	if (stacks->a[0] > stacks->a[1] && stacks->b[0] < stacks->b[1])
	{
		ft_interpret(stacks, "ss");
		write(1, "ss\n", 3);
	}
	else if (stacks->a[0] > stacks->a[1])
	{
		ft_interpret(stacks, "sa");
		write(1, "sa\n", 3);
	}
	ft_interpret(stacks, "rb");
	write(1, "rb\n", 3);
}

static void		ft_push_in_a(t_que *stacks, int *pivot)
{
	int			ss;
	int			ra;

	ss = 0;
	if (stacks->a[0] > stacks->a[1] && stacks->b[0] < stacks->b[1])
	{
		ft_interpret(stacks, "ss");
		write(1, "ss\n", 3);
		ss = 1;
	}
	else if (stacks->a[0] > stacks->a[1])
	{
		ft_interpret(stacks, "sa");
		write(1, "sa\n", 3);
	}
	if (ss == 0 && stacks->b[0] < stacks->b[1])
	{
		ft_interpret(stacks, "sb");
		write(1, "sb\n", 3);
	}
	ra = 0;
	while (stacks->b[0] > stacks->a[1])
	{
		ft_interpret(stacks, "ra");
		write(1, "ra\n", 3);
		ra++;
	}
	ft_interpret(stacks, "pa");
	write(1, "pa\n", 3);
	while (ra > 0)
	{
		if (stacks->a[0] > stacks->a[1])
		{
			ft_interpret(stacks, "sa");
			write(1, "sa\n", 3);
		}
		ft_interpret(stacks, "rra");
		write(1, "rra\n", 4);
		ra--;
	}
	*pivot = stacks->b[ft_find_pivot(stacks->b, stacks->eb - 1)];
}

void			ft_quick_sort_b(t_que *stacks)
{
	int			pivot;

	pivot = stacks->b[ft_find_pivot(stacks->b, stacks->eb - 1)];
	while (ft_b_non_sorted(stacks) == -1)
	{
		while (stacks->b[0] == ft_find_max(stacks->b, stacks->eb - 1))
			ft_push_in_a(stacks, &pivot);
/*		if (pivot == ft_find_max(stacks->b, stacks->eb - 1))
			pivot = stacks->b[ft_find_pivot(stacks->b, stacks->eb - 1)];*/
		while (stacks->eb > 3 && pivot != ft_find_max(stacks->b, stacks->eb - 1)
		&& ft_b_non_sorted(stacks) == -1)
		{
			if (stacks->b[0] < pivot)
				ft_swap_and_rotate_b(stacks);
			else
				ft_push_in_a(stacks, &pivot);
		}
/*		if (stacks->eb > 3 && ft_b_non_sorted(stacks) == -1)
			pivot = stacks->b[ft_find_pivot(stacks->b, stacks->eb - 1)];*/
		if (stacks->eb == 3)
			ft_sort_first_three_in_b(stacks);
		if (stacks->a[0] > stacks->a[1])
		{
			ft_interpret(stacks, "sa");
			write(1, "sa\n", 3);
		}
	}
}
