/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 11:26:47 by amacieje          #+#    #+#             */
/*   Updated: 2017/07/18 11:27:14 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_reverse(t_que *stacks, char *line)
{
	int		tmp;
	int		i;

	if ((line[2] == 'a' || line[2] == 'r') && stacks->ea > 0)
	{
		tmp = stacks->a[stacks->ea];
		i = stacks->ea + 1;
		while (--i > 0)
			stacks->a[i] = stacks->a[i - 1];
		stacks->a[0] = tmp;
	}
	if ((line[2] == 'b' || line[2] == 'r') && stacks->eb > 0)
	{
		tmp = stacks->b[stacks->eb - 1];
		i = stacks->eb + 1;
		while (--i > 0)
			stacks->b[i] = stacks->b[i - 1];
		stacks->b[0] = tmp;
	}
}
