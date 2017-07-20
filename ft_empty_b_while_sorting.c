/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_empty_b_while_sorting.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 11:57:09 by amacieje          #+#    #+#             */
/*   Updated: 2017/07/20 12:07:16 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rb_sb_rrb(t_que *stacks)
{
	ft_interpret(stacks, "rb");
	write(1, "rb\n", 3);
	ft_interpret(stacks, "sb");
	write(1, "sb\n", 3);
	ft_interpret(stacks, "rrb");
	write(1, "rrb\n", 4);
}

void		ft_empty_b_while_sorting(t_que *stacks)
{
	int			ss;

	ss = 0;
	if (stacks->b[1] < stacks->b[2])
		ft_rb_sb_rrb(stacks);
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
	ft_interpret(stacks, "pa");
	write(1, "pa\n", 3);
}
