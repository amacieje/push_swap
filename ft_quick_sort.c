/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 16:45:22 by amacieje          #+#    #+#             */
/*   Updated: 2017/09/14 11:24:13 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int			ft_find_max_index(int *tab, int end)
{
	int				k;
	int				max;
	int				max_index;

	max = tab[0];
	k = 0;
	max_index = 0;
	while (++k <= end)
		if (tab[k] > max)
		{
			max = tab[k];
			max_index = k;
		}
	return (max_index);
}

static void			ft_empty_a(t_que *stacks)
{
	int				pivot;

	while (stacks->ea > 2 && ft_a_non_sorted(stacks) == -1)
	{
		pivot = stacks->a[ft_find_pivot(stacks, stacks->a, stacks->ea, -1)];
		if (stacks->a[0] <= pivot)
		{
			ft_interpret(stacks, "pb");
			write(1, "pb\n", 3);
		}
		else
		{
			ft_interpret(stacks, "ra");
			write(1, "ra\n", 3);
		}
	}
}

void				ft_quick_sort(t_que *stacks)
{
	int				max;
	int				max_index;

	ft_empty_a(stacks);
	if (stacks->ea == 2)
		ft_only_three_nbs(stacks);
	while (stacks->eb > 0)
	{
		max_index = ft_find_max_index(stacks->b, stacks->eb - 1);
		max = stacks->b[max_index];
		if (max_index <= (stacks->eb - 1) / 2)
			while (stacks->b[0] != max)
			{
				ft_interpret(stacks, "rb");
				write(1, "rb\n", 3);
			}
		else
			while (stacks->b[0] != max)
			{
				ft_interpret(stacks, "rrb");
				write(1, "rrb\n", 4);
			}
		ft_interpret(stacks, "pa");
		write(1, "pa\n", 3);
	}
}
