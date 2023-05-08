/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:53:27 by asacchin          #+#    #+#             */
/*   Updated: 2023/05/08 18:01:26 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack *stack, int f)
{
	int	len;

	len = stack->len_a;
	while (len > 0)
	{
		stack->a[len] = stack->a[len - 1];
		len--;
	}
	stack->len_a++;
	stack->a[0] = stack->b[0];
	len = 1;
	while (len < stack->len_b)
	{
		stack->b[len - 1] = stack->b[len];
		len++;
	}
	stack->len_b--;
	if (f == 1)
		ft_printf("pa\n");
	stack->nb_moves++;
	update_stacks_data(stack);
}

void	pb(t_stack *stack, int f)
{
	int	len;

	len = stack->len_b;
	while (len > 0)
	{
		stack->b[len] = stack->b[len - 1];
		len--;
	}
	stack->len_b++;
	stack->b[0] = stack->a[0];
	while (len < stack->len_a)
	{
		stack->a[len - 1] = stack->a[len];
		len++;
	}
	stack->len_a--;
	if (f == 1)
		ft_printf("pb\n");
	stack->nb_moves++;
	update_stacks_data(stack);
}
