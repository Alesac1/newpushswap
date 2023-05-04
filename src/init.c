/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:52:30 by asacchin          #+#    #+#             */
/*   Updated: 2023/05/04 17:35:45 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_input(char **argv)
{
	char	**tmp;
	int		j;
	int		i;
	int		index;

	index = 0;
	j = 0;
	while (argv[++j])
	{
		ft_is_valid(argv, j);
		i = 0;
		tmp = ft_split(argv[j], 32);
		while (tmp[i])
			i++;
		if (i == 0)
			ft_error();
		if (i == 1)
			index++;
		else if (i > 1)
			index += i;
		free_memory(tmp, 1);
	}
	return (index);
}

int	init(t_stack *stack, char *argv[], int f)
{
	int	index;

	index = get_input(argv);
	stack->a = malloc(index * sizeof(int));
	stack->b = malloc(index * sizeof(int));
	stack->len_a = index;
	stack->len_b = 0;
	stack->max_a = 0;
	stack->min_a = 0;
	stack->max_b = 0;
	stack->min_b = 0;
	stack->index_a_string = 0;
	stack->nb_moves = 0;
	writestack(stack, argv);
	check_dup(stack);
	init_moves(stack);
	smallsort(stack, f);
	return (0);
}

void	init_moves(t_stack *stack)
{
	stack->moves.pa = 0;
	stack->moves.pb = 0;
	stack->moves.ra = 0;
	stack->moves.rb = 0;
	stack->moves.rr = 0;
	stack->moves.rra = 0;
	stack->moves.rrb = 0;
	stack->moves.rrr = 0;
	stack->moves.sa = 0;
	stack->moves.sb = 0;
}

int	writestack(t_stack *stack, char **argv)
{
	int		j;
	int		i;
	char	**tmp;
	int		index;

	index = 0;
	j = 1;
	while (argv[j])
	{
		i = 0;
		tmp = ft_split(argv[j], 32);
		while (tmp[i])
			i++;
		if (i > 1)
			stack = multiple_input(stack, tmp);
		else
		{
			stack->a[stack->index_a_string] = ft_atoi(argv[j]);
			stack->index_a_string++;
		}
		j++;
		stack->j = j;
		free_memory(tmp, 1);
	}
	return (0);
}

t_stack	*multiple_input(t_stack *stack, char **tmp)
{
	int	i;

	i = 0;
	while (tmp[i])
	{
		stack->a[stack->index_a_string] = ft_atoi(tmp[i]);
		stack->index_a_string++;
		i++;
	}
	return (stack);
}
