/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorting.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 15:08:12 by amacieje          #+#    #+#             */
/*   Updated: 2017/07/27 17:29:17 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int			ft_final_check(t_que *stacks, int len)
{
	int				*a;
	int				i;

	a = stacks->a;
	i = 0;
	while (i < len)
	{
		if (a[i] > a[i + 1])
			return (-1);
		i++;
	}
	if (stacks->eb != 0 || stacks->ea != stacks->len)
		return (-1);
	return (0);
}

int					ft_check_sorting(int *a, int len)
{
	t_que			stacks;
	int				*b;
	char			*line;

	if (!(b = (int *)malloc(sizeof(int) * ((unsigned int)len + 1))))
		exit(-1);
	ft_init_stacks(&stacks, a, b, len);
	while (get_next_line(0, &line) > 0)
	{
		if (ft_interpret(&stacks, line) < 0)
		{
			free(line);
			write(1, "Error\n", 6);
			return (-1);
		}
		free(line);
	}
	free(line);
	if (ft_final_check(&stacks, len) < 0)
	{
		write(1, "KO\n", 3);
		free(b);
		return (-1);
	}
	write(1, "OK\n", 3);
	free(b);
	return (0);
}
