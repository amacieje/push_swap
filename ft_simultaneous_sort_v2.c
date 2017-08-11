/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simultaneous_sort_v2.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 13:28:48 by amacieje          #+#    #+#             */
/*   Updated: 2017/08/01 14:07:28 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		ft_else(t_que *stacks)
{
	ft_interpret(stacks, "sa");
	write(1, "sa\n", 3);
	ft_interpret(stacks, "rra");
	write(1, "rra\n", 4);
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

void			ft_simultaneous_sort_v2(t_que *stacks)
{
	if (stacks->a[0] < stacks->a[1]
	&& stacks->a[1] > stacks->a[stacks->ea])
	{
		ft_interpret(stacks, "rra");
		write(1, "rra\n", 4);
	}
	if (stacks->a[1] < stacks->a[stacks->ea]
	&& stacks->a[0] < stacks->a[stacks->ea]
	&& stacks->a[0] > stacks->a[1] && stacks->eb >= 2)
		ft_simultaneous_swap(stacks);
	else if (stacks->a[1] < stacks->a[stacks->ea]
	&& stacks->a[0] > stacks->a[stacks->ea])
	{
		ft_interpret(stacks, "ra");
		write(1, "ra\n", 3);
	}
	else if (stacks->a[0] > stacks->a[1])
		ft_else(stacks);
	if (stacks->eb >= 2 && stacks->b[0] < stacks->b[1])
	{
		ft_interpret(stacks, "sb");
		write(1, "sb\n", 3);
	}
}
