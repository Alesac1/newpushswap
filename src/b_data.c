/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_data.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:17:49 by asacchin          #+#    #+#             */
/*   Updated: 2023/05/09 20:51:48 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	b_maxminint(t_stack *stack)
{
	int	i;

	i = 0;
	stack->max_b = stack->b[0];
	stack->min_b = stack->b[0];
	while (i < stack->len_b)
	{
		if (stack->b[i] > stack->max_b)
			stack->max_b = stack->b[i];
		if (stack->b[i] < stack->min_b)
			stack->min_b = stack->b[i];
		i++;
	}
}

int	check_b_maxindex(t_stack *stack)
{
	int	i;
	int	max;
	int	index;

	i = 0;
	index = 0;
	max = stack->b[i];
	while (i < stack->len_b)
	{
		if (stack->b[i] > max)
		{
			max = stack->b[i];
			index = i;
		}
		i++;
	}
	return (index);
}

int	check_b_minindex(t_stack *stack)
{
	int	i;
	int	min;
	int	index;

	i = 0;
	index = 0;
	min = stack->b[i];
	while (i < stack->len_b)
	{
		if (stack->b[i] < min)
		{
			min = stack->b[i];
			index = i;
		}
		i++;
	}
	return (index);
}

int	find_b_major(t_stack *stack, int i)
{
	int	j;
	int	major_index;

	j = 0;
	major_index = -1;
	while (j < stack->len_b)
	{
		if (stack->b[j] > stack->a[i]
			&& (major_index == -1
				|| stack->b[j] > stack->b[major_index]))
				major_index = j;
		j++;
	}
	return (major_index);
}

int	find_b_minor(t_stack *stack, int i)
{
	int	j;
	int	minor_index;

	j = 0;
	minor_index = -1;
	while (j < stack->len_b)
	{
		if (stack->b[j] < stack->a[i]
			&& (minor_index == -1
				|| stack->b[j] > stack->b[minor_index]))
					minor_index = j;
		j++;
	}
	return (minor_index);
}