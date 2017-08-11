/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_only_three_nbs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 14:26:18 by amacieje          #+#    #+#             */
/*   Updated: 2017/07/31 13:28:30 by amacieje         ###   ########.fr       */
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

void			ft_only_three_nbs(t_que *stacks)
{
	if (stacks->a[0] < stacks->a[1]
		&& stacks->a[1] > stacks->a[stacks->ea])
	{
		ft_interpret(stacks, "rra");
		write(1, "rra\n", 4);
	}
	if (stacks->a[1] < stacks->a[stacks->ea]
		&& stacks->a[0] < stacks->a[stacks->ea]
		&& stacks->a[0] > stacks->a[1])
	{
		ft_interpret(stacks, "sa");
		write(1, "sa\n", 3);
	}
	else if (stacks->a[1] < stacks->a[stacks->ea]
		&& stacks->a[0] > stacks->a[stacks->ea])
	{
		ft_interpret(stacks, "ra");
		write(1, "ra\n", 3);
	}
	else if (stacks->a[0] > stacks->a[1])
		ft_else(stacks);
}
