/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:35:58 by asacchin          #+#    #+#             */
/*   Updated: 2023/05/08 19:42:02 by asacchin         ###   ########.fr       */
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
	int		total_moves;
	int		b_minindex;
	int		b_maxindex;
	int		a_minindex;
	int		a_maxindex;
	int		a_half_index;
	int		b_half_index;
	int		index_a_to_push;
	int		index_b_to_push;
	int		minor_index_num_a;
	int		minor_index_num_b;
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
int		find_b_spot(t_stack *stack, int i);
int		find_a_spot(t_stack *stack, int i);
int		find_b_major(t_stack *stack, int i);
int		find_a_major(t_stack *stack, int i);
int		find_a_minor(t_stack *stack, int i);
int		find_b_minor(t_stack *stack, int i);
int		writestack(t_stack *stack, char **argv);
int		init(t_stack *stack, char *argv[], int f);
void	different_half(t_stack *stack, int i);
void	update_stacks_data(t_stack *stack);
void	upper_half(t_stack *stack, int i);
void	lower_half(t_stack *stack, int i);
void	smallsort(t_stack *stack, int f);
void	ft_is_valid(char **av, int j);
void	b_maxminint(t_stack *stack);
void	printstack(t_stack *stack);
void	a_maxminint(t_stack *stack);
void	init_moves(t_stack *stack);
void	start_sort(t_stack *stack);
void	free_data(t_stack *stack);
void	update_stacks_data(t_stack *stack);
void	cicle_a(t_stack *stack);
void	cicle_b(t_stack *stack);
void	tresort(t_stack *stack);
void	ft_error(void);
void	a_maxminint(t_stack *stack);
void	b_maxminint(t_stack *stack);
void	final_check(t_stack *stack);
void	sorting(t_stack *stack, int f);
int		check_a_maxindex(t_stack *stack);
int		check_b_maxindex(t_stack *stack);
int		check_a_minindex(t_stack *stack);
int		check_b_minindex(t_stack *stack);
int		find_middle_stack(t_stack *stack, int f);
void	upper_half_a(t_stack *stack, int i);
void	lower_half_a(t_stack *stack, int i);
void	different_half_a(t_stack *stack, int i);
void	upper_half_utils_b(t_stack *stack, int i, int temp_moves);
void	lower_half_utils_b(t_stack *stack, int i, int temp_moves);
void	different_half_utils_b(t_stack *stack, int i, int temp_moves);
void	upper_half_a_utils(t_stack *stack, int i, int temp_moves);
void	lower_half_a_utils(t_stack *stack, int i, int temp_moves);
void	different_half_utils_a(t_stack *stack, int i, int temp_moves);
t_stack	*multiple_input(t_stack *stack, char **tmp);

#endif