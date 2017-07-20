/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atolli.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 16:06:15 by amacieje          #+#    #+#             */
/*   Updated: 2017/07/20 12:32:41 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

static int			ft_int_max_lenght(void)
{
	char			*intmax;
	int				len;

	intmax = ft_longitoa(INT_MAX);
	len = ft_strlen(intmax);
	free(intmax);
	return (len);
}

long long int		ft_atolli(const char *str)
{
	int				i;
	int				k;
	long long int	nbr;
	long long int	neg;

	nbr = 0;
	neg = 1;
	i = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
			(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr = nbr * 10;
		nbr = nbr + (int)str[i] - '0';
		i++;
	}
	k = ft_int_max_lenght();
	if ((i > k && neg == 1) || (i > (k + 1) && neg == -1))
		return (LONG_MAX);
	return (neg * nbr);
}
