/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_and_sort_b_using_a.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 14:33:23 by amacieje          #+#    #+#             */
/*   Updated: 2017/07/26 14:39:05 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		ft_three_left_in_a(t_que *stacks)
{
	ft_only_three_nbs(stacks);
	while (stacks->b[0] > stacks->b[stacks->eb - 1])
	{
		ft_interpret(stacks, "pa");
		write(1, "pa\n", 3);
		if (stacks->a[0] > stacks->a[1])
		{
			ft_interpret(stacks, "sa");
			write(1, "sa\n", 3);
		}
	}
	ft_interpret(stacks, "rrb");
	write(1, "rrb\n", 4);
	while (stacks->eb > 0)
	{
		ft_interpret(stacks, "pa");
		write(1, "pa\n", 3);
	}
}

static void		ft_more_than_three_nbs_in_a(t_que *stacks)
{
	int			pa;

	pa = 0;
	while (stacks->b[0] > stacks->b[stacks->eb - 1])
	{
		ft_interpret(stacks, "pa");
		write(1, "pa\n", 3);
		pa++;
	}
	ft_interpret(stacks, "rrb");
	write(1, "rrb\n", 4);
	while (pa > 0)
	{
		ft_interpret(stacks, "pb");
		write(1, "pb\n", 3);
		pa--;
	}
}

void			ft_push_and_sort_b_using_a(t_que *stacks)
{
	ft_interpret(stacks, "pb");
	write(1, "pb\n", 3);
	if (stacks->b[0] < stacks->b[1] && stacks->b[0] < stacks->b[2])
	{
		ft_interpret(stacks, "rb");
		write(1, "rb\n", 3);
		if (stacks->ea == 2)
			ft_three_left_in_a(stacks);
		else
			ft_more_than_three_nbs_in_a(stacks);
	}
	else if (stacks->b[0] < stacks->b[1])
	{
		ft_interpret(stacks, "sb");
		write(1, "sb\n", 3);
	}
}
