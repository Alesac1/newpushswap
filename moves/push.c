/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:53:27 by asacchin          #+#    #+#             */
/*   Updated: 2023/05/09 18:28:50 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_stack *stack, int f)
{
	int	i;

	i = stack->len_b;
	while (i > 0)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->len_b++;
	stack->b[0] = stack->a[0];
	while (i < stack->len_a)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->len_a--;
	if (f == 1)
		ft_printf("pb\n");
	stack->total_moves++;
	update_stacks_data(stack);
}

void	pa(t_stack *stack, int f)
{
	int	i;

	i = stack->len_a;
	while (i > 0)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->len_a++;
	stack->a[0] = stack->b[0];
	while (i < stack->len_b)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->len_b--;
	if (f == 1)
		ft_printf("pa\n");
	stack->total_moves++;
	update_stacks_data(stack);
}
