/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 11:25:18 by amacieje          #+#    #+#             */
/*   Updated: 2017/07/18 11:25:58 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_rotate(t_que *stacks, char *line)
{
	int		tmp;
	int		i;

	if ((line[1] == 'a' || line[1] == 'r') && stacks->ea > 0)
	{
		tmp = stacks->a[0];
		i = -1;
		while (++i < stacks->ea)
			stacks->a[i] = stacks->a[i + 1];
		stacks->a[stacks->ea] = tmp;
	}
	if ((line[1] == 'b' || line[1] == 'r') && stacks->eb > 0)
	{
		tmp = stacks->b[0];
		i = -1;
		while (++i < stacks->eb)
			stacks->b[i] = stacks->b[i + 1];
		stacks->b[stacks->eb - 1] = tmp;
	}
}
