/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:51:25 by asacchin          #+#    #+#             */
/*   Updated: 2023/05/09 18:27:05 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack *stack, int f)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	if (stack->len_a == 1)
		return ;
	temp = stack->a[1];
	stack->a[1] = stack->a[0];
	stack->a[0] = temp;
	if (f == 1)
		ft_printf("sa\n");
	stack->total_moves++;
	update_stacks_data(stack);
}

void	sb(t_stack *stack, int f)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	if (stack->len_b == 1)
		return ;
	temp = stack->b[1];
	stack->b[1] = stack->b[0];
	stack->b[0] = temp;
	if (f == 1)
		ft_printf("sb\n");
	stack->total_moves++;
	update_stacks_data(stack);
}

void	ss(t_stack *stack, int f)
{
	sa(stack, 0);
	sb(stack, 0);
	if (f == 1)
		ft_printf("ss\n");
	stack->total_moves--;
	update_stacks_data(stack);
}
