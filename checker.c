/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 11:10:19 by amacieje          #+#    #+#             */
/*   Updated: 2017/07/18 12:24:35 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				main(int argc, char **argv)
{
	int			*a;
	int			i;
	int			k;

	a = NULL;
	k = 0;
	if (argc == 2 && !(a = ft_split_arg(argv[1], &k)))
		return (0);
	else if (argc > 2)
	{
		i = 1;
		while (argv[++i])
			if (ft_conformity(argv[i]) < 0)
				return (0);
		if (!(a = (int *)malloc(sizeof(int) * --i)))
			exit(-1);
		k = i - 1;
		while (--i >= 0)
			a[i] = ft_atoi(argv[i + 1]);
	}
	if (ft_check_doubles(a, k) <= 0)
		return (0);
	if (ft_check_sorting(a, k) == 0)
		write(1, "OK\n", 3);
	free(a);
	return (0);
}