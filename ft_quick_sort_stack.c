/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 16:43:02 by amacieje          #+#    #+#             */
/*   Updated: 2017/08/09 13:43:17 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	else if (len > 2)
		ft_quick_sort(&stacks);
	else if (len == 1 && stacks.a[0] > stacks.a[1])
	{
		ft_interpret(&stacks, "sa");
		write(1, "sa\n", 3);
	}
	free(b);
}	
