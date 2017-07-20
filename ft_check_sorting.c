/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorting.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 15:08:12 by amacieje          #+#    #+#             */
/*   Updated: 2017/07/19 17:26:10 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int			ft_final_check(t_que *stacks, int len)
{
	int				*a;
	int				*b;
	int				i;

	a = stacks->a;
	b = stacks->b;
	i = -1;
	while (++i <= len)
		printf("a[%d] = %d\n", i, a[i]);
	i = -1;
	while (++i < stacks->eb)
		printf("b[%d] = %d\n", i, b[i]);
	i = 0;
	while (i < len)
	{
		if (a[i] > a[i + 1])
		{
			printf("i fautif = %d\n", i);
			printf("a[i] fautif = %d\n", a[i]);
			printf("a[i + 1] fautif = %d\n", a[i + 1]);
			return (-1);
		}
		i++;
	}
	if (stacks->eb != 0 || stacks->ea != stacks->len)
		return (-1);
	return (0);
}

int			ft_check_sorting(int *a, int len)
{
	t_que	 stacks;
	int		*b;
	char	*line;

	if (!(b = (int *)malloc(sizeof(int) * (len + 1))))
		exit(-1);
	ft_init_stacks(&stacks, a, b, len);
	while (get_next_line(0, &line) > 0)
		if (ft_interpret(&stacks, line) < 0)
		{
			write(1, "Error\n", 6);
			return (-1);
		}
	if (ft_final_check(&stacks, len) < 0)
	{
		write(1, "KO\n", 3);
		free(b);
		return (-1);
	}
	return (0);
}
