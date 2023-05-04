# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/04 15:12:30 by asacchin          #+#    #+#              #
#    Updated: 2023/05/04 16:57:29 by asacchin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = push_swap.c src/utils.c src/init.c src/sorting.c src/ft_atoi.c moves/push.c moves/reverse_rotate.c moves/rotate.c moves/swap.c \
		src/check.c
OBJ = ${SRC:.c=.o}
NAME = push_swap

# SRC_B =	bonus/checker.c
# OBJ_B =	${SRC_B:.c=.o}
# NAME_B = checker
OUT = ${filter-out srcs/push_swap.o ,${OBJ}}

CC = gcc -Wall -Wextra -Werror -g
FT_PRINTF = include/ft_printf
LIBFT = include/Libft
LIBRARY = include/ft_printf/libftprintf.a include/Libft/libft.a

.c.o:
	@${CC} -c $< -o ${<:.c=.o}

all	: $(NAME)

$(NAME) : $(OBJ)
	@make -C $(FT_PRINTF)
	@make -C $(LIBFT)
	@$(CC) $(OBJ) $(LIBRARY) -o $(NAME)

# bonus : $(NAME) $(OBJ_B)
# 	@$(CC) $(OUT) $(OBJ_B) $(LIBRARY) -o $(NAME_B)

clean :
	@make clean -C $(FT_PRINTF)
	@make clean -C $(LIBFT)
	@rm -f $(OBJ)
	@rm -f $(OBJ_B)
	
fclean : clean
	@make fclean -C $(FT_PRINTF)
	@make fclean -C $(LIBFT)
	@rm -f $(NAME)
	@rm -f $(NAME_B)
	
re : fclean all bonus

.PHONY: all clean fclean re