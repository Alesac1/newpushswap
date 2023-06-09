/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:55:37 by asacchin          #+#    #+#             */
/*   Updated: 2023/05/08 16:41:30 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	free_memory(char **str, int f)
{
	int	i;

	i = 0;
	if (f == 1)
	{
		while (str[i])
		{
			free(str[i]);
			i++;
		}
		free(str);
		return (1);
	}
	return (0);
}

void	free_data(t_stack *stack)
{
	free(stack->a);
	free(stack->b);
	free(stack);
}
