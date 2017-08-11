/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 12:10:43 by amacieje          #+#    #+#             */
/*   Updated: 2017/08/09 11:43:25 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		ft_find_max_in_b(t_que *stacks)
{
	int			k;
	int			max;

	max = stacks->b[0];
	k = 0;
	while (++k < stacks->eb)
		if (stacks->b[k] > max)
			max = stacks->b[k];
	return (max);
}

static void		ft_swap_and_rotate_b(t_que *stacks)
{
	if (stacks->a[0] > stacks->a[1])
	{
		ft_interpret(stacks, "ss");
		write(1, "ss\n", 3);
	}
	else
	{
		ft_interpret(stacks, "sb");
		write(1, "sb\n", 3);
	}
	ft_interpret(stacks, "rb");
	write(1, "rb\n", 3);
}

static void		ft_push_in_a(t_que *stacks, int *pivot)
{
	if (stacks->a[0] > stacks->a[1])
	{
		ft_interpret(stacks, "ss");
		write(1, "ss\n", 3);
	}
	else
	{
		ft_interpret(stacks, "sb");
		write(1, "sb\n", 3);
	}
	ft_interpret(stacks, "pa");
	write(1, "pa\n", 3);
	*pivot = stacks->b[0];
}

void			ft_quick_sort_b(t_que *stacks)
{
	int			pivot;

	pivot = stacks->b[0];
	while (ft_b_non_sorted(stacks) == -1)
	{
		if (pivot == ft_find_max_in_b(stacks))
		{
			ft_interpret(stacks, "pa");
			write(1, "pa\n", 3);
			pivot = stacks->b[0];
		}
		while (stacks->eb > 3 && pivot != ft_find_max_in_b(stacks))
		{
			if (stacks->b[1] < pivot)
				ft_swap_and_rotate_b(stacks);
			else
				ft_push_in_a(stacks, &pivot);
		}
		if (stacks->eb > 3)
		{
			ft_interpret(stacks, "pa");
			write(1, "pa\n", 3);
			pivot = stacks->b[0];
		}
		if (stacks->eb == 3)
			ft_sort_first_three_in_b(stacks);
	}
}
