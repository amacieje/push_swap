/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 11:32:07 by amacieje          #+#    #+#             */
/*   Updated: 2017/07/27 17:16:15 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

static t_list		*findorcreatelst(t_list **top, int fd)
{
	t_list			*taxi;

	taxi = *top;
	if (taxi)
		while (taxi)
		{
			if (fd == (int)taxi->content_size)
				return (taxi);
			taxi = taxi->next;
		}
	taxi = ft_lstnew("\0", (size_t)fd);
	ft_lstadd(top, taxi);
	return (taxi);
}

static char			*freeandjoin(char *content, char *buf, int ret)
{
	char			*str;

	str = content;
	content = ft_strnjoin(content, buf, (size_t)ret);
	free(str);
	return (content);
}

int					get_next_line(const int fd, char **line)
{
	static t_list	*stream = NULL;
	t_list			*top;
	char			buf[BUFF_SIZE + 1];
	char			*memleak;
	int				ret;

	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0)
		return (-1);
	top = stream;
	stream = findorcreatelst(&top, fd);
	while (stream->content && !ft_strchr(stream->content, '\n') &&
			(ret = (int)read(fd, buf, BUFF_SIZE)) && ret)
		stream->content = freeandjoin(stream->content, buf, ret);
	ret = 0;
	while (((char *)(stream->content))[ret] &&
			((char *)(stream->content))[ret] != '\n')
		++ret;
	*line = ft_strndup(stream->content, (size_t)ret);
	if (((char *)stream->content)[ret] == '\n')
		++ret;
	memleak = stream->content;
	stream->content = ft_strdup((char *)((char *)(stream->content) + ret));
	free(memleak);
	stream = top;
	return (ret != 0);
}
