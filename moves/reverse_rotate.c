/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:56:16 by asacchin          #+#    #+#             */
/*   Updated: 2023/05/08 18:01:19 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack *stack, int f)
{
	int	tmp;
	int	len;

	tmp = stack->a[stack->len_a - 1];
	len = stack->len_a;
	while (len > 0)
	{
		stack->a[len] = stack->a[len - 1];
		len--;
	}
	stack->a[0] = tmp;
	if (f == 1)
		ft_printf("rra\n");
	stack->nb_moves++;
	update_stacks_data(stack);
}

void	rrb(t_stack *stack, int f)
{
	int	tmp;
	int	len;

	tmp = stack->b[stack->len_b - 1];
	len = stack->len_b;
	while (len > 0)
	{
		stack->b[len] = stack->b[len - 1];
		len--;
	}
	stack->b[0] = tmp;
	if (f == 1)
		ft_printf("rrb\n");
	stack->nb_moves++;
	update_stacks_data(stack);
}

void	rrr(t_stack *stack, int f)
{
	int	tmp;
	int	len;

	tmp = stack->a[stack->len_a - 1];
	len = stack->len_a;
	while (len-- > 0)
		stack->a[len] = stack->a[len - 1];
	stack->a[0] = tmp;
	tmp = stack->b[stack->len_b - 1];
	len = stack->len_b;
	while (len-- > 0)
		stack->b[len] = stack->b[len - 1];
	stack->b[0] = tmp;
	if (f == 1)
		ft_printf("rrr\n");
	stack->nb_moves++;
	update_stacks_data(stack);
}
