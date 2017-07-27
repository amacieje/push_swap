/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simultaneous_sort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 14:30:27 by amacieje          #+#    #+#             */
/*   Updated: 2017/07/26 14:44:55 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		ft_simultaneous_reverse(t_que *stacks)
{
	int			ss;

	ss = 0;
	if (stacks->b[0] > stacks->b[1]
	&& stacks->b[1] < stacks->b[stacks->eb - 1]
	&& stacks->a[0] < stacks->a[1]
	&& stacks->a[1] > stacks->a[stacks->ea])
	{
		ss = 1;
		ft_interpret(stacks, "rrr");
		write(1, "rrr\n", 4);
	}
	else if (stacks->b[0] > stacks->b[1]
	&& stacks->b[1] < stacks->b[stacks->eb - 1])
	{
		ft_interpret(stacks, "rrb");
		write(1, "rrb\n", 4);
	}
	if (ss == 0 && stacks->a[0] < stacks->a[1]
	&& stacks->a[1] > stacks->a[stacks->ea])
	{
		ft_interpret(stacks, "rra");
		write(1, "rra\n", 4);
	}
}

static void		ft_simultaneous_rotate(t_que *stacks)
{
	int			rr;

	rr = 0;
	if (stacks->b[0] < stacks->b[1] && stacks->b[1] >
	stacks->b[stacks->eb - 1] && stacks->b[0] < stacks->b[stacks->eb - 1]
	&& stacks->a[1] < stacks->a[stacks->ea]
	&& stacks->a[0] > stacks->a[stacks->ea])
	{
		rr = 1;
		ft_interpret(stacks, "rr");
		write(1, "rr\n", 3);
	}
	else if (stacks->b[0] < stacks->b[1]
	&& stacks->b[1] > stacks->b[stacks->eb - 1]
	&& stacks->b[0] < stacks->b[stacks->eb - 1])
	{
		ft_interpret(stacks, "rb");
		write(1, "rb\n", 3);
	}
	if (rr == 0 && stacks->a[1] < stacks->a[stacks->ea]
	&& stacks->a[0] > stacks->a[stacks->ea])
	{
		ft_interpret(stacks, "ra");
		write(1, "ra\n", 3);
	}
}

static void		ft_simultaneous_swap(t_que *stacks)
{
	int			ss;

	ss = 0;
	if (stacks->b[0] < stacks->b[1]
	&& stacks->a[0] > stacks->a[1]
	&& stacks->a[1] < stacks->a[stacks->ea]
	&& stacks->a[0] < stacks->a[stacks->ea])
	{
		ss = 1;
		ft_interpret(stacks, "ss");
		write(1, "ss\n", 3);
	}
	else if (stacks->b[0] < stacks->b[1])
	{
		ft_interpret(stacks, "sb");
		write(1, "sb\n", 3);
	}
	if (ss == 0 && stacks->a[1] < stacks->a[stacks->ea]
	&& stacks->a[0] > stacks->a[1]
	&& stacks->a[0] < stacks->a[stacks->ea])
	{
		ft_interpret(stacks, "sa");
		write(1, "sa\n", 3);
	}
}

void			ft_simultaneous_sort(t_que *stacks)
{
	ft_simultaneous_reverse(stacks);
	ft_simultaneous_rotate(stacks);
	ft_simultaneous_swap(stacks);
	if (stacks->a[0] > stacks->a[1])
	{
		ft_interpret(stacks, "sa");
		write(1, "sa\n", 3);
		if (stacks->b[1] < stacks->b[stacks->eb - 1])
		{
			ft_interpret(stacks, "rrr");
			write(1, "rrr\n", 4);
		}
		else
		{
			ft_interpret(stacks, "rra");
			write(1, "rra\n", 4);
		}
	}
	else if (stacks->b[1] < stacks->b[stacks->eb - 1])
	{
		ft_interpret(stacks, "rrb");
		write(1, "rrb\n", 4);
	}
	if (stacks->ea > 2)
		ft_push_and_sort_b_using_a(stacks);
}
