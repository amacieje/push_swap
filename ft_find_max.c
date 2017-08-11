/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:14:31 by amacieje          #+#    #+#             */
/*   Updated: 2017/08/09 16:15:28 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				ft_find_max(int *tab, int end)
{
	int			k;
	int			max;

	max = tab[0];
	k = 0;
	while (++k <= end)
		if (tab[k] > max)
			max = tab[k];
	return (max);
}
