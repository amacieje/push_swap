/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 16:25:03 by amacieje          #+#    #+#             */
/*   Updated: 2017/07/27 11:45:17 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		ft_push_in_b(t_que *stacks)
{
	int			tmp;
	int			i;

	tmp = 0;
	if (stacks->eb != 0)
		tmp = stacks->b[0];
	stacks->b[0] = stacks->a[0];
	i = -1;
	while (++i < stacks->ea)
		stacks->a[i] = stacks->a[i + 1];
	if (stacks->eb != 0)
	{
		i = stacks->eb + 1;
		while (--i > 1)
			stacks->b[i] = stacks->b[i - 1];
		stacks->b[1] = tmp;
	}
	stacks->eb++;
	stacks->ea--;
}

static void		ft_push_in_a(t_que *stacks)
{
	int			tmp;
	int			i;

	tmp = 0;
	stacks->ea++;
	if (stacks->ea > 0)
		tmp = stacks->a[0];
	stacks->a[0] = stacks->b[0];
	stacks->eb--;
	i = -1;
	while (++i < stacks->eb)
		stacks->b[i] = stacks->b[i + 1];
	if (stacks->ea > 0)
	{
		i = stacks->ea + 1;
		while (--i > 1)
			stacks->a[i] = stacks->a[i - 1];
		stacks->a[1] = tmp;
	}
}

void			ft_push(t_que *stacks, char *line)
{
	if (line[1] == 'b' && stacks->ea > -1)
		ft_push_in_b(stacks);
	else if (line[1] == 'a' && stacks->eb != 0)
		ft_push_in_a(stacks);
}
