/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 16:45:22 by amacieje          #+#    #+#             */
/*   Updated: 2017/08/09 12:02:09 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			ft_push_in_b(t_que *stacks)
{
	if (stacks->eb == 3)
		ft_sort_first_three_in_b(stacks);
	if (stacks->eb > 1 && ft_find_min_in_b(stacks) == stacks->b[0])
	{
		ft_interpret(stacks, "rb");
		write(1, "rb\n", 3);
	}
	if (stacks->eb > 1 && stacks->b[0] < stacks->b[1])
	{
		ft_interpret(stacks, "ss");
		write(1, "ss\n", 3);
	}
	else
	{
		ft_interpret(stacks, "sa");
		write(1, "sa\n", 3);
	}
	ft_interpret(stacks, "pb");
	write(1, "pb\n", 3);
}

void			ft_place_max_at_bottom(t_que *stacks)
{
	if (stacks->eb > 1 && stacks->b[0] < stacks->b[1]
	&& stacks->b[0] != ft_find_min_in_b(stacks))
	{
		ft_interpret(stacks, "ss");
		write(1, "ss\n", 3);
	}
	else
	{
		ft_interpret(stacks, "sa");
		write(1, "sa\n", 3);
	}
	if (stacks->eb > 1 && stacks->b[0] == ft_find_min_in_b(stacks))
	{
		ft_interpret(stacks, "rr");
		write(1, "rr\n", 3);
	}
	else
	{
		ft_interpret(stacks, "ra");
		write(1, "ra\n", 3);
	}
}

void			ft_quick_sort(t_que *stacks)
{
	int			pivot;

//	ft_pre_sort(stacks);
	pivot = stacks->a[0];
	while (stacks->ea > 2 && ft_a_non_sorted(stacks) == -1
	&& pivot != ft_find_min_in_a(stacks))
	{
		if (stacks->a[1] < pivot)
			ft_push_in_b(stacks);
		else
			ft_place_max_at_bottom(stacks);
	}
	if (stacks->ea == 2)
		ft_only_three_nbs(stacks);
	else if (ft_a_non_sorted(stacks) == -1
	&& pivot == ft_find_min_in_a(stacks))
	{
		ft_interpret(stacks, "pb");
		write(1, "pb\n", 3);
		ft_quick_sort(stacks);
	}
	if (ft_b_non_sorted(stacks) == -1)
		ft_quick_sort_b(stacks);
	if (ft_a_non_sorted(stacks) == -1)
		ft_quick_sort(stacks);
	while (stacks->eb != 0)
	{
		ft_interpret(stacks, "pa");
		write(1, "pa\n", 3);
	}
}
