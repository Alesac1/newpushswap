/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   half_a_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:37:42 by asacchin          #+#    #+#             */
/*   Updated: 2023/05/09 21:14:41 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	upper_half_a_utils(t_stack *stack, int i, int temp_moves)
{
	init_moves(stack);
	stack->total_moves = temp_moves;
	stack->index_b_to_push = i;
	stack->index_a_to_push = stack->minor_index_num_a;
	if (i == stack->minor_index_num_a)
		stack->moves.rr = stack->minor_index_num_a;
	else if (i < stack->minor_index_num_a)
	{
		stack->moves.rr = i;
		stack->moves.ra = stack->minor_index_num_a - i;
	}
	else if (i > stack->minor_index_num_a)
	{
		stack->moves.rr = stack->minor_index_num_a;
		stack->moves.rb = i - stack->minor_index_num_a;
	}
}

void	lower_half_a_utils(t_stack *stack, int i, int temp_moves)
{
	init_moves(stack);
	stack->total_moves = temp_moves;
	stack->index_a_to_push = stack->minor_index_num_a;
	stack->index_b_to_push = i;
	if ((stack->len_b - i) == (stack->len_a - stack->minor_index_num_a))
		stack->moves.rrr = stack->len_a - stack->minor_index_num_a;
	else if ((stack->len_b - i) < (stack->len_a - stack->minor_index_num_a))
	{
		stack->moves.rrr = stack->len_b - i;
		stack->moves.rra = (stack->len_a - stack->minor_index_num_a)
			- (stack->len_b - i);
	}
	else if ((stack->len_b - i) > (stack->len_a - stack->minor_index_num_a))
	{
		stack->moves.rrr = stack->len_a - stack->minor_index_num_a;
		stack->moves.rrb = (stack->len_b - i)
			- (stack->len_a - stack->minor_index_num_a);
	}
}

void	different_half_a_utils(t_stack *stack, int i, int temp_moves)
{
	init_moves(stack);
	stack->total_moves = temp_moves;
	stack->index_a_to_push = stack->minor_index_num_a;
	stack->index_b_to_push = i;
	if (i < stack->b_half_index
		&& stack->minor_index_num_a >= stack->a_half_index)
	{
		stack->moves.rb = i;
		stack->moves.rra = stack->len_a - stack->minor_index_num_a;
	}
	else if (i > stack->b_half_index
		&& stack->minor_index_num_a < stack->a_half_index)
	{
		stack->moves.rrb = stack->len_b - i;
		stack->moves.ra = i - stack->minor_index_num_a;
	}
}
