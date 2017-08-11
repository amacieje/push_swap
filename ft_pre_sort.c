/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pre_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 10:22:38 by amacieje          #+#    #+#             */
/*   Updated: 2017/08/09 11:59:40 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*static void		ft_sort_first_three_in_b(t_que *stacks)
{
	if (stacks->b[0] > stacks->b[1] && stacks->b[1] < stacks->b[2])
	{
		ft_interpret(stacks, "rrb");
		write(1, "rrb\n", 4);
	}
	if (stacks->b[0] < stacks->b[1] && stacks->b[1] > stacks->b[2]
		&& stacks->b[0] < stacks->b[2])
	{
		ft_interpret(stacks, "rb");
		write(1, "rb\n", 3);
	}
	if (stacks->b[0] < stacks->b[1])
	{
		ft_interpret(stacks, "sb");
		write(1, "sb\n", 3);
	}
	if (stacks->b[1] < stacks->b[2])
	{
		ft_interpret(stacks, "rrb");
		write(1, "rrb\n", 4);
	}
}*/

static void		ft_push_a(t_que *stacks)
{
	ft_interpret(stacks, "pa");
	write(1, "pa\n", 3);
	if (stacks->a[0] > stacks->a[1])
	{
		ft_interpret(stacks, "sa");
		write(1, "sa\n", 3);
	}

}

static void		ft_pre_sort_b(t_que *stacks)
{
	while (stacks->eb > 3)
	{
		if (stacks->b[1] < stacks->b[0] && stacks->b[1] > stacks->a[0])
		{
			ft_push_a(stacks);
			ft_push_a(stacks);
		}
		else if (stacks->b[0] > stacks->b[1])
		{
			ft_push_a(stacks);
			ft_interpret(stacks, "rb");
			write(1, "rb\n", 3);
		}
		if (stacks->eb > 3 && stacks->b[0] < stacks->b[1])
		{
			ft_interpret(stacks, "rb");
			write(1, "rb\n", 3);
			ft_push_a(stacks);
		}
	}
	ft_sort_first_three_in_b(stacks);
	while (stacks->eb > 0)
		ft_push_a(stacks);
}

void			ft_pre_sort(t_que *stacks)
{
	while (stacks->ea > 1)
	{
		if (stacks->a[0] < stacks->a[1])
		{
			ft_interpret(stacks, "pb");
			write(1, "pb\n", 3);
			ft_interpret(stacks, "ra");
			write(1, "ra\n", 3);
		}
		else
		{
			ft_interpret(stacks, "ra");
			write(1, "ra\n", 3);
			ft_interpret(stacks, "pb");
			write(1, "pb\n", 3);
		}
		if (stacks->eb > 1 && stacks->b[0] < stacks->b[1])
		{
			ft_interpret(stacks, "sb");
			write(1, "sb\n", 3);
		}
	}
	if (stacks->a[0] > stacks->a[1])
	{
		ft_interpret(stacks, "sa");
		write(1, "sa\n", 3);
	}
	ft_pre_sort_b(stacks);
}
