/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:33:37 by asacchin          #+#    #+#             */
/*   Updated: 2023/05/04 17:34:08 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	checkseq(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->len_a - 1)
	{
		if (stack->a[i] > stack->a[i + 1])
			i++;
		else
			return (0);
	}
	return (1);
}

int	check_a_input(t_stack *stack)
{
	if (stack->len_a <= 3)
		return (0);
	else
		return (1);
}

int	check_dup(t_stack *stack)
{
	int		i;
	int		j;
	int		*tmp;

	i = 0;
	tmp = copy_stack(stack);
	while (i < stack->len_a)
	{
		j = 0;
		while (j < stack->len_a)
		{
			if (i != j && stack->a[j] == tmp[i])
				ft_error();
			j++;
		}
		i++;
	}
	free(tmp);
	return (0);
}

int	*copy_stack(t_stack *stack)
{
	int		i;
	int		j;
	int		*res;

	res = malloc(stack->len_a * sizeof(int));
	i = 0;
	j = 0;
	while (i < stack->len_a)
		res[j++] = stack->a[i++];
	return (res);
}

void	ft_is_valid(char **av, int j)
{
	int		z;

	z = 0;
	while (av[j][z])
	{
		if (((av[j][z] == '-') && (!ft_isdigit(av[j][z + 1])))
		|| ((av[j][z] == '+') && (!ft_isdigit(av[j][z + 1]))))
			ft_error();
		if ((ft_isdigit(av[j][z])) || (av[j][z] == 32)
			|| (av[j][z] == '-') || (av[j][z] == '+'))
			z++;
		else
			ft_error();
	}
}
