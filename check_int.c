/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlentz <qlentz@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:47:52 by qlentz            #+#    #+#             */
/*   Updated: 2022/11/16 15:47:52 by qlentz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_init(int size)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(stack));
	if (!stack)
		error("malloc failed");
	stack->stack = (int *)malloc(sizeof(int) * size);
	if (!stack->stack)
	{
		free(stack);
		error("malloc failed");
	}
	return (stack);
}

static long long	ft_atol(const char *str)
{
	int			i;
	long long	result;
	int			sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += (str[i] - '0');
		i++;
	}
	result *= sign;
	return (result);
}

int	check_int(char **av)
{
	int			i;
	long long	lr;

	i = 0;
	while (av[i])
	{
		lr = ft_atol(av[i]);
		if (lr < -2147483648 || lr > 2147483647)
			return (0);
		i++;
	}
	return (1);
}
