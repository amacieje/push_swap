/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_pivot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 15:11:04 by amacieje          #+#    #+#             */
/*   Updated: 2017/09/14 11:51:13 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int				ft_find_pivot(t_que *stacks, int *tab, int end, int i)
{
	int			*scores;
	int			k;
	int			less;

	if (!(scores = (int *)malloc(sizeof(int) * (end + 1))))
		exit(-1);
	while (++i <= end)
	{
		k = -1;
		less = 0;
		while (++k <= end)
			if (tab[k] < tab[i])
				less++;
		scores[i] = less;
	}
	i = -1;
	k = stacks->len < 101 ? 9 : 18;
	while (++i <= end)
		if (scores[i] == ((end + 1) / k + (end + 1) % k) % (end + 1))
		{
			free(scores);
			return (i);
		}
	free(scores);
	return (0);
}
