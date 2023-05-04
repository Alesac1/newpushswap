/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:54:39 by asacchin          #+#    #+#             */
/*   Updated: 2023/05/04 15:55:12 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack *stack, int f)
{
	int	tmp;
	int	i;

	i = -1;
	tmp = stack->a[0];
	while (++i < stack->len_a - 1)
		stack->a[i] = stack->a[i + 1];
	stack->a[i] = tmp;
	if (f == 1)
		ft_printf("ra\n");
	stack->nb_moves++;
}

void	rb(t_stack *stack, int f)
{
	int	tmp;
	int	i;

	i = -1;
	tmp = stack->a[0];
	while (++i < stack->len_b - 1)
		stack->b[i] = stack->b[i + 1];
	stack->b[i] = tmp;
	if (f == 1)
		ft_printf("rb\n");
	stack->nb_moves++;
}

void	rr(t_stack *stack, int f)
{
	int	tmp;
	int	i;

	i = -1;
	tmp = stack->a[0];
	while (++i < stack->len_a - 1)
		stack->a[i] = stack->a[i + 1];
	stack->a[i] = tmp;
	i = -1;
	tmp = stack->b[0];
	while (++i < stack->len_b - 1)
		stack->b[i] = stack->b[i + 1];
	stack->b[i] = tmp;
	if (f == 1)
		ft_printf("rr\n");
	stack->nb_moves++;
}
