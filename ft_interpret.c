/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interpret.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 11:29:27 by amacieje          #+#    #+#             */
/*   Updated: 2017/07/18 12:24:46 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_interpret(t_que *stacks, char *line)
{
	if (ft_strcmp(line, "ss") == 0)
	{
		ft_swap_stacks(stacks->ea, &stacks->a[0], &stacks->a[1]);
		ft_swap_stacks(stacks->eb, &stacks->b[0], &stacks->b[1]);
	}
	else if (ft_strcmp(line, "sa") == 0)
		ft_swap_stacks(stacks->ea, &stacks->a[0], &stacks->a[1]);
	else if (ft_strcmp(line, "sb") == 0)
		ft_swap_stacks(stacks->eb, &stacks->b[0], &stacks->b[1]);
	else if (ft_strcmp(line, "ra") == 0 || ft_strcmp(line, "rb") == 0 ||
	ft_strcmp(line, "rr") == 0)
		ft_rotate(stacks, line);
	else if (ft_strcmp(line, "pa") == 0 || ft_strcmp(line, "pb") == 0)
		ft_push(stacks, line);
	else if (ft_strcmp(line, "rra") == 0 || ft_strcmp(line, "rrb") == 0 ||
	ft_strcmp(line, "rrr") == 0)
		ft_reverse(stacks, line);
	else
	{
		free(stacks->b);
		return (-1);
	}
	return (0);
}
