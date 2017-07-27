/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacieje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 10:25:20 by amacieje          #+#    #+#             */
/*   Updated: 2017/07/27 11:38:35 by amacieje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define BUFF_SIZE 3

# include "libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>
# include <fcntl.h>

typedef struct		s_que
{
	int				*a;
	int				*b;
	int				len;
	int				ea;
	int				eb;
	int				padding;
}					t_que;

int					*ft_split_arg(char *str, int *k);
int					ft_conformity(char *str);
int					ft_check_doubles(int *a, int k);
void				ft_init_stacks(t_que *stacks, int *a, int *b, int len);
int					ft_interpret(t_que *stacks, char *line);
int					ft_check_sorting(int *a, int len);
void				ft_swap_stacks(int end, int *a, int *b);
void				ft_only_three_nbs(t_que *stacks);
void				ft_sort_stack(int *a, int len);
void				ft_empty_b_while_sorting(t_que *stacks);
void				ft_push_and_sort_b_using_a(t_que *stacks);
void				ft_push_min_in_b(t_que *stacks);
void				ft_place_max_at_bottom_of_a(t_que *stacks);
void				ft_simultaneous_sort(t_que *stacks);
void				ft_push(t_que *stacks, char *line);
void				ft_rotate(t_que *stacks, char *line);
void				ft_reverse(t_que *stacks, char *line);
int					get_next_line(const int fd, char **line);

#endif
