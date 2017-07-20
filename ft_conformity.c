/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conformity.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 11:45:00 by amacieje          #+#    #+#             */
/*   Updated: 2017/07/18 11:45:03 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_conformity(char *str)
{
	int		k;

	if (ft_atolli(str) > INT_MAX || ft_atolli(str) < INT_MIN)
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	k = -1;
	while (str[++k])
	{
		if ((ft_isdigit(str[k]) == 0 && str[k] != '-') ||
		(str[k] == '-' && ft_isdigit(str[k + 1]) == 0) ||
		(str[k] == '-' && k != 0))
		{
			write(2, "Error\n", 6);
			return (-1);
		}
	}
	return (0);
}
