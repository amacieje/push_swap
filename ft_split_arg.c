/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 11:42:16 by amacieje          #+#    #+#             */
/*   Updated: 2017/09/04 17:24:23 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				*ft_split_arg(char *str, int *k)
{
	int			*a;
	char		**s;
	int			i;

	s = ft_strsplit(str, ' ');
	i = 0;
	while (s[i])
		i++;
	if (!(a = (int*)malloc(sizeof(int) * (unsigned int)i)))
		exit(-1);
	*k = i - 1;
	i = -1;
	while (s[++i])
	{
		if (ft_conformity(s[i]) < 0)
			return (NULL);
		a[i] = ft_atoi(s[i]);
	}
	i = -1;
	while (s[++i])
		free(s[i]);
	free(s);
	return (a);
}
