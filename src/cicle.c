/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cicle.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:17:00 by asacchin          #+#    #+#             */
/*   Updated: 2023/05/09 21:06:05 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	cicle_a(t_stack *stack)
{
	int	i;

	i = 0;
	stack->total_moves = 0;
	while (i < stack->len_a)
	{
		stack->minor_index_num_b = find_b_minor(stack, i);
		if (stack->minor_index_num_b == -1)
			stack->minor_index_num_b = find_b_major(stack, i);
		find_b_spot(stack, i);
		i++;
	}
}

int	find_b_spot(t_stack *stack, int i)
{
	update_stacks_data(stack);
	if (i < stack->a_half_index && stack->minor_index_num_b
		< stack->b_half_index)
		upper_half(stack, i);
	else if (i >= stack->a_half_index && stack->minor_index_num_b
		>= stack->b_half_index)
		lower_half(stack, i);
	else
		different_half(stack, i);
	update_stacks_data(stack);
	return (0);
}

void	cicle_b(t_stack *stack)
{
	int	i;

	i = 0;
	stack->total_moves = 0;
	while (i < stack->len_b)
	{
		stack->minor_index_num_a = find_a_major(stack, i);
		if (stack->minor_index_num_a == -1)
			stack->minor_index_num_a = find_a_minor(stack, i);
		find_a_spot(stack, i);
		i++;
	}
}

int	find_a_spot(t_stack *stack, int i)
{
	update_stacks_data(stack);
	if (i < stack->b_half_index && stack->minor_index_num_a
		< stack->a_half_index)
		upper_half_a(stack, i);
	else if (i >= stack->b_half_index && stack->minor_index_num_a
		>= stack->a_half_index)
		lower_half_a(stack, i);
	else
		different_half_a(stack, i);
	update_stacks_data(stack);
	return (0);
}
