/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:23:50 by asacchin          #+#    #+#             */
/*   Updated: 2023/05/08 19:43:36 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	update_stacks_data(t_stack *stack)
{
	a_maxminint(stack);
	b_maxminint(stack);
	stack->a_maxindex = check_a_maxindex(stack);
	stack->a_minindex = check_a_minindex(stack);
	stack->b_maxindex = check_b_maxindex(stack);
	stack->b_minindex = check_b_minindex(stack);
	stack->a_half_index = find_middle_stack(stack, 1);
	stack->b_half_index = find_middle_stack(stack, 0);
}

int	find_middle_stack(t_stack *stack, int f)
{
	int	half_index;

	half_index = 0;
	if (f == 1)
	{
		if ((stack->len_a) % 2 == 0)
			half_index = ((stack->len_a) / 2);
		else if ((stack->len_a) % 2 == 1)
			half_index = (((stack->len_a) / 2) + 1);
	}
	else
	{
		if ((stack->len_b) % 2 == 0)
			half_index = ((stack->len_b) / 2);
		else if ((stack->len_b) % 2 == 1)
			half_index = (((stack->len_b) / 2) + 1);
	}
	return (half_index);
}
