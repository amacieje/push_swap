/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_min_in_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 12:08:09 by amacieje          #+#    #+#             */
/*   Updated: 2017/07/20 12:09:22 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			ft_push_min_in_b(t_que *stacks)
{
	if (stacks->a[1] < stacks->a[0] &&
		stacks->a[1] < stacks->a[stacks->ea])
	{
		ft_interpret(stacks, "sa");
		write(1, "sa\n", 3);
		ft_interpret(stacks, "pb");
		write(1, "pb\n", 3);
	}
	else if (stacks->a[stacks->ea] < stacks->a[0] &&
		stacks->a[stacks->ea] < stacks->a[1])
	{
		ft_interpret(stacks, "rra");
		write(1, "rra\n", 4);
		ft_interpret(stacks, "pb");
		write(1, "pb\n", 3);
	}
	else if (stacks->a[0] < stacks->a[1] &&
		stacks->a[0] < stacks->a[stacks->ea])
	{
		ft_interpret(stacks, "pb");
		write(1, "pb\n", 3);
	}
	ft_place_max_at_bottom_of_a(stacks);
}
