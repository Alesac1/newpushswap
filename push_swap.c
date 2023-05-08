/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:34:41 by asacchin          #+#    #+#             */
/*   Updated: 2023/05/08 17:45:05 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;

	if (argc < 2)
		return (0);
	stack = malloc(sizeof(t_stack));
	init(stack, argv, 0);
	start_sort(stack);
	free_data(stack);
	printstack(stack);
}

void	printstack(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->len_a)
	{
		printf("stack->a %d\n", stack->a[i]);
		i++;
	}
	i = 0;
	write(1, "\n", 1);
	while (i < stack->len_b)
	{
		printf("stack->b %d\n", stack->b[i]);
		i++;
	}
}