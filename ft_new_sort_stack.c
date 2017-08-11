/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_sort_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 11:10:07 by amacieje          #+#    #+#             */
/*   Updated: 2017/08/03 11:33:35 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void			ft_new_sort_stack(int *a, int len)
{
	t_que		stacks;
	int			*b;

	if (!(b = (int *)malloc(sizeof(int) * (len + 1))))
		exit(-1);
	ft_init_stacks(&stacks, a, b, len);
	ft_check_if_already_sorted(&stacks, &len);
	if (len == 2)
		ft_only_three_nbs(&stacks);
	else
		ft_simple_sort(&stacks);
/*	while (stacks.ea > 2 && stacks.eb < 3)
		ft_push_min_in_b(&stacks);
	if (stacks.eb == 3 && stacks.ea == 2)
		ft_simultaneous_sort(&stacks);
	else if (stacks.eb == 3)
		ft_sort_first_three_in_b(&stacks);
	while (stacks.ea > 2 && stacks.eb > 0)
		ft_simultaneous_sort(&stacks);
	while (stacks.eb > 0)
		ft_empty_b_while_sorting(&stacks);
	if (stacks.a[0] > stacks.a[1])
	{
		ft_interpret(&stacks, "sa");
		write(1, "sa\n", 3);
	}*/
	free(b);
}
