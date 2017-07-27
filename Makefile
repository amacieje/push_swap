# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amacieje <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/26 14:17:29 by amacieje          #+#    #+#              #
#    Updated: 2017/07/27 14:14:23 by amacieje         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
CFLAGS = -Wall -Wextra -Werror
SRC_CHECKER = checker.c ft_check_doubles.c ft_check_sorting.c ft_conformity.c ft_init_stacks.c ft_interpret.c ft_push.c ft_reverse.c ft_rotate.c ft_swap_stacks.c ft_split_arg.c get_next_line.c
SRC_PUSH_SWAP = push_swap.c ft_check_doubles.c ft_conformity.c ft_empty_b_while_sorting.c ft_init_stacks.c ft_interpret.c ft_only_three_nbs.c ft_place_max_at_bottom_of_a.c ft_push.c ft_push_and_sort_b_using_a.c ft_push_min_in_b.c ft_reverse.c ft_rotate.c ft_simultaneous_sort.c ft_sort_stack.c ft_split_arg.c ft_swap_stacks.c
DSRC = libft/

all: $(NAME)

$(NAME): $(SRC_CHECKER)
	make -C libft/
	gcc $(CFLAGS) -o checker $(SRC_CHECKER) $(DSRC)libft.a
	gcc $(CFLAGS) -o push_swap $(SRC_PUSH_SWAP) $(DSRC)libft.a

clean:
	make -C libft/ clean
	rm checker push_swap

fclean: clean
	make -C libft/ fclean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
