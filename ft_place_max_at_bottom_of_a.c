/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_max_at_bottom_of_a.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 14:28:21 by amacieje          #+#    #+#             */
/*   Updated: 2017/07/26 14:29:18 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_place_max_at_bottom_of_a(t_que *stacks)
{
	if (stacks->a[0] > stacks->a[1]
	&& stacks->a[0] > stacks->a[stacks->ea])
	{
		ft_interpret(stacks, "ra");
		write(1, "ra\n", 3);
	}
	else if (stacks->a[1] > stacks->a[0]
	&& stacks->a[1] > stacks->a[stacks->ea])
	{
		ft_interpret(stacks, "sa");
		write(1, "sa\n", 3);
		ft_interpret(stacks, "ra");
		write(1, "ra\n", 3);
	}
	if (stacks->eb != 3 && stacks->a[1] < stacks->a[0])
	{
		ft_interpret(stacks, "sa");
		write(1, "sa\n", 3);
		if (stacks->ea > 2)
		{
			ft_interpret(stacks, "pb");
			write(1, "pb\n", 3);
		}
	}
}
