/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <alesacchi1907@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:21:36 by asacchin          #+#    #+#             */
/*   Updated: 2023/05/04 17:29:36 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	ft_atoi(char *str)
{
	long int	r;
	int			s;

	r = 0;
	s = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			s = -1;
		str++;
	}
	while (*str)
	{
		if (!ft_isdigit(*str))
			ft_error();
		r = r * 10 + (*str++) - 48;
	}
	if (r > 2147483647 || r < -2147483647)
		ft_error();
	return (r * s);
}
