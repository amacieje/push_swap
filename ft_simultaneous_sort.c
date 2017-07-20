/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simultaneous_sort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 13:45:25 by amacieje          #+#    #+#             */
/*   Updated: 2017/07/20 17:21:49 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		ft_complement(t_que *stacks)
{
	int			tmp;
	int			i;
	int			pa;

	if (stacks->b[0] < stacks->b[stacks->eb - 1])
	{
		ft_interpret(stacks, "rrb");
		write(1, "rrb\n", 4);
	}
	if (stacks->a[0] > stacks->a[1])
	{
		ft_interpret(stacks, "sa");
		write(1, "sa\n", 3);
	}
	ft_interpret(stacks, "pb");
	write(1, "pb\n", 3);
	tmp = stacks->b[0];
	ft_interpret(stacks, "rb");
	write(1, "rb\n", 3);
	i = -1;
	pa = 0;
	while (++i < stacks->eb && stacks->b[i] > tmp)
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

static void		ft_simultaneous_rotate(t_que *stacks)
{
	int			rr;

	rr = 0;
	if (stacks->a[0] > stacks->a[stacks->ea] && stacks->b[0]
		< stacks->b[stacks->eb - 1] && stacks->b[0] < stacks->b[1])
	{
		ft_interpret(stacks, "rr");
		write(1, "rr\n", 3);
		rr = 1;
	}
	else if (stacks->a[0] > stacks->a[stacks->ea])
	{
		ft_interpret(stacks, "ra");
		write(1, "ra\n", 3);
	}
	if (rr == 0 && stacks->b[0] < stacks->b[stacks->eb - 1]
		&& stacks->b[0] < stacks->b[1])
	{
		ft_interpret(stacks, "rb");
		write(1, "rb\n", 3);
	}
	ft_complement(stacks);
}

static void		ft_simultaneous_swap(t_que *stacks)
{
	int			ss;

	ss = 0;
	if ((stacks->a[1] < stacks->a[0] || stacks->a[1] > stacks->a[stacks->ea])
		&& (stacks->b[1] > stacks->b[0]
		&& stacks->b[1] > stacks->b[stacks->eb - 1]))
	{
		ft_interpret(stacks, "ss");
		write(1, "ss\n", 3);
		ss = 1;
	}
	else if (stacks->b[1] > stacks->b[0]
		&& stacks->b[1] > stacks->b[stacks->eb - 1])
	{
		ft_interpret(stacks, "sb");
		write(1, "sb\n", 3);
	}
	if (ss == 0 && (stacks->a[1] > stacks->a[stacks->ea]
		|| (stacks->a[1] < stacks->a[0])))
	{
		ft_interpret(stacks, "sa");
		write(1, "sa\n", 3);
	}
}

void			ft_simultaneous_sort(t_que *stacks)
{
	ft_simultaneous_swap(stacks);
	ft_simultaneous_rotate(stacks);
}
