/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:35:58 by asacchin          #+#    #+#             */
/*   Updated: 2023/05/04 16:59:29 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "./include/ft_printf/ft_printf.h"
# include "./include/Libft/libft.h"


typedef struct s_move
{
	int	sa;
	int	sb;
	int	ss;
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
	int	pa;
	int	pb;
}		t_moves;

typedef struct s_stack
{
	int		*a;
	int		*b;
	int		j;
	int		len_a;
	int		len_b;
	int		max_a;
	int		min_a;
	int		max_b;
	int		min_b;	
	int		index_a_string;
	int		nb_moves;
	t_moves	moves;
}		t_stack;

		/* MOVES */

void	pa(t_stack *stack, int f);
void	pb(t_stack *stack, int f);
void	sa(t_stack *stack, int f);
void	sb(t_stack *stack, int f);
void	ss(t_stack *stack, int f);
void	ra(t_stack *stack, int f);
void	rb(t_stack *stack, int f);
void	rr(t_stack *stack, int f);
void	rra(t_stack *stack, int f);
void	rrb(t_stack *stack, int f);
void	rrr(t_stack *stack, int f);

		/* SORT */

int		ft_atoi(char *str);
int		checkseq(t_stack *stack);
int		check_dup(t_stack *stack);
int		*copy_stack(t_stack *stack);
int		check_a_input(t_stack *stack);
int		free_memory(char **str, int f);
int		writestack(t_stack *stack, char **argv);
int		init(t_stack *stack, char *argv[], int f);
void	smallsort(t_stack *stack, int f);
void	ft_is_valid(char **av, int j);
void	init_moves(t_stack *stack);
void	tresort(t_stack *stack);
void	ft_error(void);
t_stack	*multiple_input(t_stack *stack, char **tmp);

#endif