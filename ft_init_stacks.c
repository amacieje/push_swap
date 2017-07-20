/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 12:11:35 by amacieje          #+#    #+#             */
/*   Updated: 2017/07/20 11:35:19 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_stacks(t_que *stacks, int *a, int *b, int len)
{
	stacks->a = a;
	stacks->b = b;
	stacks->len = len;
	stacks->ea = len;
	stacks->eb = 0;
}
