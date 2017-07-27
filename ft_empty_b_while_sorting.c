/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_empty_b_while_sorting.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 11:57:09 by amacieje          #+#    #+#             */
/*   Updated: 2017/07/26 14:42:06 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_empty_b_while_sorting(t_que *stacks)
{
	ft_place_max_at_bottom_of_a(stacks);
	if (stacks->a[0] < stacks->b[0])
	{
		ft_interpret(stacks, "ra");
		write(1, "ra\n", 3);
		while (stacks->eb > 0
		&& stacks->b[0] > stacks->a[stacks->ea])
		{
			ft_interpret(stacks, "pa");
			write(1, "pa\n", 3);
		}
		ft_interpret(stacks, "rra");
		write(1, "rra\n", 4);
	}
	while (stacks->eb > 0)
	{
		ft_interpret(stacks, "pa");
		write(1, "pa\n", 3);
	}
}
