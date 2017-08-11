/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_pivot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 15:11:04 by amacieje          #+#    #+#             */
/*   Updated: 2017/08/10 17:46:14 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int				ft_find_pivot(int *tab, int end)
{
/*	int			*scores;
	int			i;
	int			k;
	int			less;

	scores = (int *)malloc(sizeof(int) * (end + 1));
	i = -1;
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
	while (++i <= end)
		if (scores[i] == (end + 1) / 2)
			return (i);
	return (0);*/
	int			average;
	int			i;

	average = (ft_find_min(tab, end) + ft_find_max(tab, end)) / 2; 
	i = -1;
	while (tab[++i] != average)
	{
		i = 0;
		while (i <= end)
		{
			if (tab[i] == average)
				return (i);
			i++;
		}
		average--;
		i = -1;
	}
	if (tab[i] == average)
		return (i);
	return (-1);
}
