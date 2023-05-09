/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   half.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:27:25 by asacchin          #+#    #+#             */
/*   Updated: 2023/05/09 21:14:11 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	upper_half(t_stack *stack, int i)
{
	int	temp_moves;

	temp_moves = 0;
	if (i == stack->minor_index_num_b)
		temp_moves = stack->minor_index_num_b;
	else if (i < stack->minor_index_num_b)
		temp_moves = stack->minor_index_num_b;
	else if (i > stack->minor_index_num_b)
		temp_moves = i;
	if ((temp_moves < stack->total_moves) || (i == 0))
		upper_half_utils_b(stack, i, temp_moves);
}

void	upper_half_a(t_stack *stack, int i)
{
	int	temp_moves;

	temp_moves = 0;
	if (i == stack->minor_index_num_a)
		temp_moves = stack->minor_index_num_a;
	else if (i < stack->minor_index_num_a)
		temp_moves = stack->minor_index_num_a;
	else if (i > stack->minor_index_num_a)
		temp_moves = i;
	if ((temp_moves < stack->total_moves) || (i == 0))
		upper_half_a_utils(stack, i, temp_moves);
}

void	lower_half(t_stack *stack, int i)
{
	int	temp_moves;

	temp_moves = 0;
	if ((stack->len_a - i) == (stack->len_b - stack->minor_index_num_b))
		temp_moves = stack->len_b - stack->minor_index_num_b;
	else if ((stack->len_a - i) < (stack->len_b - stack->minor_index_num_b))
		temp_moves = stack->len_b - stack->minor_index_num_b;
	else if ((stack->len_a - i) > (stack->len_b - stack->minor_index_num_b))
		temp_moves = stack->len_a - i;
	if ((temp_moves < stack->total_moves) || (i == 0))
		lower_half_utils_b(stack, i, temp_moves);
}

void	lower_half_a(t_stack *stack, int i)
{
	int	temp_moves;

	temp_moves = 0;
	if ((stack->len_b - i) == (stack->len_a - stack->minor_index_num_a))
		temp_moves = stack->len_a - stack->minor_index_num_a;
	else if ((stack->len_b - i) < (stack->len_a - stack->minor_index_num_a))
		temp_moves = stack->len_a - stack->minor_index_num_a;
	else if ((stack->len_b - i) > (stack->len_a - stack->minor_index_num_a))
		temp_moves = stack->len_b - i;
	if ((temp_moves < stack->total_moves) || (i == 0))
		lower_half_a_utils(stack, i, temp_moves);
}

void	different_half(t_stack *stack, int i)
{
	int	temp_moves;

	temp_moves = 0;
	if (i < stack->a_half_index && stack->minor_index_num_b
		>= stack->b_half_index)
		temp_moves = i + (stack->len_b - stack->minor_index_num_b);
	else if (i >= stack->a_half_index && stack->minor_index_num_b
		< stack->b_half_index)
		temp_moves = stack->minor_index_num_b + (stack->len_a - i);
	if ((temp_moves < stack->total_moves) || (i == 0))
		different_half_utils_b(stack, i, temp_moves);
}

void	different_half_a(t_stack *stack, int i)
{
	int	temp_moves;

	temp_moves = 0;
	if (i < stack->b_half_index && stack->minor_index_num_a
		>= stack->a_half_index)
		temp_moves = i + (stack->len_a - stack->minor_index_num_a);
	else if (i >= stack->b_half_index && stack->minor_index_num_a
		< stack->a_half_index)
		temp_moves = stack->minor_index_num_a + (stack->len_b - i);
	if ((temp_moves < stack->total_moves) || (i == 0))
		different_half_a_utils(stack, i, temp_moves);
}
