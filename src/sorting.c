/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:36:42 by asacchin          #+#    #+#             */
/*   Updated: 2023/05/11 17:59:48 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	smallsort(t_stack *stack, int f)
{
	if (f == 0)
	{
		if (!(check_a_input(stack)))
		{
			if (stack->len_a == 2 && checkseq(stack))
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

void	start_sort(t_stack *stack)
{
	if (!checkseq(stack))
	{
		pb(stack, 1);
		pb(stack, 1);
		while (3 < stack->len_a)
		{
			cicle_a(stack);
			sorting(stack, 0);
		}
		tresort(stack);
		while (stack->len_b > 0)
		{
			cicle_b(stack);
			sorting(stack, 1);
		}
		final_check(stack);
	}
}

void	sorting(t_stack *stack, int f)
{
	while (stack->moves.pa-- > 0)
		pa(stack, 1);
	while (stack->moves.pb-- > 0)
		pb(stack, 1);
	while (stack->moves.ra-- > 0)
		ra(stack, 1);
	while (stack->moves.rb-- > 0)
		rb(stack, 1);
	while (stack->moves.rr-- > 0)
		rr(stack, 1);
	while (stack->moves.rra-- > 0)
		rra(stack, 1);
	while (stack->moves.rrb-- > 0)
		rrb(stack, 1);
	while (stack->moves.rrr-- > 0)
		rrr(stack, 1);
	if (f == 0)
		pb(stack, 1);
	else if (f == 1)
		pa(stack, 1);
}

void	final_check(t_stack *stack)
{
	if (stack->a_minindex < stack->a_half_index)
	{
		while (stack->a_minindex > 0)
		{
			ra(stack, 1);
			update_stacks_data(stack);
		}
	}
	else
	{
		while (stack->a_minindex > 0)
		{
			rra(stack, 1);
			update_stacks_data(stack);
		}
	}
}
