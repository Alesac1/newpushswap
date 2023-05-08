/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   half_b_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:32:53 by asacchin          #+#    #+#             */
/*   Updated: 2023/05/08 18:51:04 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	upper_half_utils_b(t_stack *stack, int i, int temp_moves)
{
	init_moves(stack);
	stack->total_moves = temp_moves;
	stack->index_a_to_push = i;
	stack->index_b_to_push = stack->minor_index_num_b;
	if (i == stack->minor_index_num_b)
		stack->moves.rr = stack->minor_index_num_b;
	else if (i < stack->minor_index_num_b)
	{
		stack->moves.rr = i;
		stack->moves.rb = stack->minor_index_num_b - i;
	}
	else if (i > stack->minor_index_num_b)
	{
		stack->moves.rr = stack->minor_index_num_b;
		stack->moves.ra = i - stack->minor_index_num_b;
	}
}

void	lower_half_utils_b(t_stack *stack, int i, int temp_moves)
{
	init_moves(stack);
	stack->total_moves = temp_moves;
	stack->index_b_to_push = stack->minor_index_num_b;
	stack->index_a_to_push = i;
	if ((stack->len_a - i) == (stack->len_b - stack->minor_index_num_b))
		stack->moves.rrr = stack->len_b - stack->minor_index_num_b;
	else if ((stack->len_a - i) < (stack->len_b - stack->minor_index_num_b))
	{
		stack->moves.rrr = stack->len_a - i;
		stack->moves.rrb = (stack->len_b - stack->minor_index_num_b)
			- (stack->len_a - i);
	}
	else if ((stack->len_a - i) > (stack->len_b - stack->minor_index_num_b))
	{
		stack->moves.rrr = stack->len_b - stack->minor_index_num_b;
		stack->moves.rra = (stack->len_a - i)
			- (stack->len_b - stack->minor_index_num_b);
	}
}

void	different_half_utils_b(t_stack *stack, int i, int temp_moves)
{
	init_moves(stack);
	stack->total_moves = temp_moves;
	stack->index_b_to_push = stack->minor_index_num_b;
	stack->index_a_to_push = i;
	if (i < stack->a_half_index
		&& stack->minor_index_num_b >= stack->b_half_index)
	{
		stack->moves.rr = i;
		stack->moves.rrb = stack->len_b - stack->minor_index_num_b;
	}
	else if (i >= stack->a_half_index
		&& stack->minor_index_num_b < stack->b_half_index)
	{
		stack->moves.rb = stack->minor_index_num_b;
		stack->moves.rra = stack->len_a - i;
	}
}