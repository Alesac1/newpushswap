/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:36:42 by asacchin          #+#    #+#             */
/*   Updated: 2023/05/04 15:59:25 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	smallsort(t_stack *stack, int f)
{
	if (f == 0)
	{
		if (!(check_a_input(stack)))
		{
			if (stack->len_a == 2 && !checkseq(stack))
			{
				sa(stack, 1);
				exit(0);
			}
			else if (stack->len_a == 3 && !checkseq(stack))
			{
				tresort(stack);
				exit(0);
			}
			else
				exit(0);
		}
	}
}

void	tresort(t_stack *stack)
{
	if ((stack->a[0] < stack->a[1]) && (stack->a[0] < stack->a[2])
		&& (stack->a[1] > stack->a[2]))
	{
		sa(stack, 1);
		ra(stack, 1);
	}
	else if ((stack->a[0] > stack->a[1]) && (stack->a[0] > stack->a[2])
		&& (stack->a[1] > stack->a[2]))
	{
		sa(stack, 1);
		rra(stack, 1);
	}
	else if ((stack->a[0] < stack->a[1]) && (stack->a[0] > stack->a[2])
		&& (stack->a[1] > stack->a[2]))
		rra(stack, 1);
	else if ((stack->a[0] > stack->a[1]) && (stack->a[0] > stack->a[2])
		&& (stack->a[1] < stack->a[2]))
		ra(stack, 1);
	else if ((stack->a[0] > stack->a[1]) && (stack->a[0] < stack->a[2])
		&& (stack->a[1] < stack->a[2]))
		sa(stack, 1);
}
