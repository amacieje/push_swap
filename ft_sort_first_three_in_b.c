/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_first_three_in_b.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 17:04:30 by amacieje          #+#    #+#             */
/*   Updated: 2017/08/07 17:04:47 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			ft_sort_first_three_in_b(t_que *stacks)
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
}
