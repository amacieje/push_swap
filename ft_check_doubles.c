/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_doubles.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 11:45:37 by amacieje          #+#    #+#             */
/*   Updated: 2017/07/20 11:47:38 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_check_doubles(int *a, int k)
{
	int		i;
	int		j;

	i = 0;
	if (k == 0)
		return (0);
	while (i <= k)
	{
		j = 0;
		while (j <= k)
		{
			if (a[i] == a[j] && i != j)
			{
				write(2, "Error\n", 6);
				free(a);
				return (-1);
			}
			j++;
		}
		i++;
	}
	return (1);
}
