/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 16:43:02 by amacieje          #+#    #+#             */
/*   Updated: 2017/09/04 17:05:11 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		ft_find_min_index(int *tab, int end)
{
	int				k;
	int				min;
	int				min_index;

	min = tab[0];
	k = 0;
	min_index = 0;
	while (++k <= end)
		if (tab[k] < min)
		{
			min = tab[k];
			min_index = k;
		}
	return (min_index);
}

static void		ft_empty_b(t_que *stacks)
{
	while (stacks->eb > 0)
	{
		ft_interpret(stacks, "pa");
		write(1, "pa\n", 3);
	}
}

static void		ft_simple_sort(t_que *stacks)
{
	int			min_index;
	int			min;

	while (stacks->ea > 2)
	{
		min_index = ft_find_min_index(stacks->a, stacks->ea);
		min = stacks->a[min_index];
		if (min_index <= stacks->ea / 2)
			while (stacks->a[0] != min)
			{
				ft_interpret(stacks, "ra");
				write(1, "ra\n", 3);
			}
		else
			while (stacks->a[0] != min)
			{
				ft_interpret(stacks, "rra");
				write(1, "rra\n", 4);
			}
		ft_interpret(stacks, "pb");
		write(1, "pb\n", 3);
	}
	ft_only_three_nbs(stacks);
	ft_empty_b(stacks);
}

void			ft_quick_sort_stack(int *a, int len)
{
	t_que		stacks;
	int			*b;

	if (!(b = (int *)malloc(sizeof(int) * (len + 1))))
		exit(-1);
	ft_init_stacks(&stacks, a, b, len);
	ft_check_if_already_sorted(&stacks, &len);
	if (len == 2)
		ft_only_three_nbs(&stacks);
	else if (len < 6 && len > 2)
		ft_simple_sort(&stacks);
	else if (len > 5)
		ft_quick_sort(&stacks);
	else if (len == 1 && stacks.a[0] > stacks.a[1])
	{
		ft_interpret(&stacks, "sa");
		write(1, "sa\n", 3);
	}
	free(b);
}
