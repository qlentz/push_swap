/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlentz <qlentz@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:03:37 by qlentz            #+#    #+#             */
/*   Updated: 2022/11/15 11:27:28 by qlentz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*empty(int ac)
{
	t_stack	*stack;
	int		i;

	i = -1;
	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->stack = (int *)malloc(sizeof(int) * (ac - 1));
	if (!stack->stack)
	{
		free(stack);
		return (NULL);
	}
	stack->size = ac - 1;
	while (++i < stack->size)
		stack->stack[i] = 0;
	stack->top = ac - 1;
	return (stack);
}

t_pushswap	ps_init(int ac, char **av)
{
	t_pushswap	ps;

	if (ac == 2)
	{
		ps.a = normalise(one_arg(av[1]));
		ps.b = empty(ps.a->size + 1);
	}
	else
	{
		ps.a = normalise(parse_args(ac, av));
		ps.b = empty(ac);
	}
	if (check_double(ps.a) == 1)
	{
		free_ps(&ps);
		error("Error");
	}
	return (ps);
}
