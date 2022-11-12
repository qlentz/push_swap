/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlentz <qlentz@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:03:37 by qlentz            #+#    #+#             */
/*   Updated: 2022/11/12 22:46:18 by qlentz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*empty(int ac)
{
	t_stack	*stack;

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
	stack->top = ac - 1;
	return (stack);
}

t_pushswap	ps_init(int ac, char **av)
{
	t_pushswap	ps;

	ps.a = normalise(parse_args(ac, av));
	ps.b = empty(ac);
	if (!ps.b)
	{
		free(ps.a->stack);
		free(ps.a);
		error("malloc error");
	}
	if (!ps.b->stack)
	{
		free(ps.a->stack);
		free(ps.a);
		free(ps.b);
		error("malloc error");
	}
	return (ps);
}
