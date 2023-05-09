/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:54:39 by asacchin          #+#    #+#             */
/*   Updated: 2023/05/09 18:28:13 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack *stack, int f)
{
	int	i;
	int	temp;
	int	len;

	i = 0;
	temp = 0;
	len = stack->len_a - 1;
	while (i < len)
	{
		temp = stack->a[i + 1];
		stack->a[i + 1] = stack->a[i];
		stack->a[i] = temp;
		i ++;
	}
	if (f == 1)
		ft_printf("ra\n");
	stack->total_moves++;
	update_stacks_data(stack);
}

void	rb(t_stack *stack, int f)
{
	int	i;
	int	temp;
	int	len;

	i = 0;
	temp = 0;
	len = stack->len_b - 1;
	while (i < len)
	{
		temp = stack->b[i + 1];
		stack->b[i + 1] = stack->b[i];
		stack->b[i] = temp;
		i ++;
	}
	if (f == 1)
		ft_printf("rb\n");
	stack->total_moves++;
	update_stacks_data(stack);
}

void	rr(t_stack *stack, int f)
{
	ra(stack, 0);
	rb(stack, 0);
	if (f == 1)
		ft_printf("rr\n");
	stack->total_moves--;
	update_stacks_data(stack);
}