/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlentz <qlentz@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:41:53 by qlentz            #+#    #+#             */
/*   Updated: 2022/11/12 22:36:01 by qlentz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	format_ok(char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (av[++i])
	{
		if (av[i][j] == '+' || av[i][j] == '-')
			j++;
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]))
				return (0);
			j++;
		}
		j = 0;
	}
	return (1);
}

t_stack	*parse_args(int ac, char **av)
{
	int		i;
	t_stack	*stack;

	i = 0;
	if (!format_ok(av))
		error("Error");
	stack = (t_stack *)malloc(sizeof(stack));
	if (!stack)
		error("malloc failed");
	stack->stack = (int *)malloc(sizeof(int) * (ac - 1));
	if (!stack->stack)
	{
		free(stack);
		error("malloc failed");
	}
	stack->size = ac - 1;
	while (av[++i])
	{
		stack->stack[i - 1] = ft_atoi(av[i]);
	}
	stack->top = 0;
	return (stack);
}

int	is_sorted(t_stack *stack)
{
	int	i;

	i = 1;
	while (i < stack->size)
	{
		if (stack->stack[i - 1] > stack->stack[i])
			return (0);
		i++;
	}
	return (1);
}
