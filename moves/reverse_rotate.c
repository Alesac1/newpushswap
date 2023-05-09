/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:56:16 by asacchin          #+#    #+#             */
/*   Updated: 2023/05/09 18:27:44 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack *stack, int f)
{
	int	i;
	int	temp;

	i = stack->len_a - 1;
	temp = 0;
	while (i > 0)
	{
		temp = stack->a[i - 1];
		stack->a[i - 1] = stack->a[i];
		stack->a[i] = temp;
		i --;
	}
	if (f == 1)
		ft_printf("rra\n");
	stack->total_moves++;
	update_stacks_data(stack);
}

void	rrb(t_stack *stack, int f)
{
	int	i;
	int	temp;

	i = stack->len_b - 1;
	temp = 0;
	while (i > 0)
	{
		temp = stack->b[i - 1];
		stack->b[i - 1] = stack->b[i];
		stack->b[i] = temp;
		i --;
	}
	if (f == 1)
		ft_printf("rrb\n");
	stack->total_moves++;
	update_stacks_data(stack);
}

void	rrr(t_stack *stack, int f)
{
	rra(stack, 0);
	rrb(stack, 0);
	if (f == 1)
		ft_printf("rrr\n");
	stack->total_moves--;
	update_stacks_data(stack);
}