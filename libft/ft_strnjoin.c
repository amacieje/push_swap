/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 11:53:19 by amacieje          #+#    #+#             */
/*   Updated: 2017/01/09 17:01:57 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnjoin(char *s1, char *s2, size_t n)
{
	char	*s3;

	s3 = NULL;
	if (s1 && s2)
	{
		s3 = ft_strnew(ft_strlen(s1) + n);
		if (s3)
		{
			ft_strcpy(s3, s1);
			ft_strncat(s3, s2, n);
		}
	}
	return (s3);
}
