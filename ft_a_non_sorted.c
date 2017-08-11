/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a_non_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 11:42:15 by amacieje          #+#    #+#             */
/*   Updated: 2017/08/10 12:03:18 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				ft_a_non_sorted(t_que *stacks)
{
	int			*a;
	int			i;

	if (stacks->ea > 0)
	{
		a = stacks->a;
		i = 0;
		while (i < stacks->ea)
		{
			if (a[i] > a[i + 1])
				return (-1);
			i++;
		}
	}
	return (0);
}
