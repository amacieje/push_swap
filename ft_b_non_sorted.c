/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_non_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 12:14:56 by amacieje          #+#    #+#             */
/*   Updated: 2017/08/10 12:03:20 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_b_non_sorted(t_que *stacks)
{
	int		*b;
	int		i;
	
	if (stacks->eb > 1)
	{
		b = stacks->b;
		i = 0;
		while (i < stacks->eb - 1)
		{
			if (b[i] < b[i + 1])
				return (-1);
			i++;
		}
	}
	return (0);
}
