/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_data.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:04:00 by asacchin          #+#    #+#             */
/*   Updated: 2023/05/09 21:05:00 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	a_maxminint(t_stack *stack)
{
	int	i;

	i = 0;
	stack->max_a = stack->a[0];
	stack->min_a = stack->a[0];
	while (i < stack->len_a)
	{
		if (stack->a[i] > stack->max_a)
			stack->max_a = stack->a[i];
		if (stack->a[i] < stack->min_a)
			stack->min_a = stack->a[i];
		i++;
	}
}

int	check_a_maxindex(t_stack *stack)
{
	int	i;
	int	max;
	int	index;

	i = 0;
	index = 0;
	max = stack->a[i];
	while (i < stack->len_a)
	{
		if (stack->a[i] > max)
		{
			max = stack->a[i];
			index = i;
		}
		i++;
	}
	return(index);
}

int	check_a_minindex(t_stack *stack)
{
	int	i;
	int	min;
	int	index;

	i = 0;
	index = 0;
	min = stack->a[i];
	while (i < stack->len_a)
	{
		if (stack->a[i] < min)
		{
			min = stack->a[i];
			index = i;
		}
		i++;
	}
	return (index);
}

int	find_a_major(t_stack *stack, int i)
{
	int	j;
	int	major_index;

	j = 0;
	major_index = -1;
	while (j < stack->len_a)
	{
		if (stack->a[j] > stack->b[i]
			&& (major_index == -1
				|| stack->a[j] < stack->a[major_index]))
				major_index = j;
		j++;
	}
	return (major_index);
}

int	find_a_minor(t_stack *stack, int i)
{
	int	j;
	int	minor_index;

	j = 0;
	minor_index = -1;
	while (j < stack->len_a)
	{
		if (stack->a[j] < stack->b[i]
			&& (minor_index == -1
				|| stack->a[j] < stack->a[minor_index]))
				minor_index = j;
		j++;
	}
	return (minor_index);
}
