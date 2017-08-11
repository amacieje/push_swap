/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:16:59 by amacieje          #+#    #+#             */
/*   Updated: 2017/08/09 16:17:02 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				ft_find_min(int *tab, int end)
{
	int			k;
	int			min;

	min = tab[0];
	k = 0;
	while (++k <= end)
		if (tab[k] < min)
			min = tab[k];
	return (min);
}
