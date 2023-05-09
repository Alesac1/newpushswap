/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:34:41 by asacchin          #+#    #+#             */
/*   Updated: 2023/05/09 21:31:28 by asacchin         ###   ########.fr       */
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
	return (0);
}

// void	printstack(t_stack *stack)
// {
// 	printf("STACK A\n");
// 	printf ("stack->a %d \n", stack->a[0]);
// 	printf ("stack->a %d \n", stack->a[1]);
// 	printf ("stack->a %d \n", stack->a[2]);
// 	printf ("stack->a %d \n", stack->a[3]);
// 	printf ("stack->a %d \n", stack->a[4]);
// 	printf ("stack->a %d \n", stack->a[5]);
// }