/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlentz <qlentz@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:00:37 by qlentz            #+#    #+#             */
/*   Updated: 2022/11/15 17:47:23 by qlentz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_pos(int n, t_stack *s)
{
	int	i;

	i = 0;
	while (s->stack[s->top + i] != n && i < s->size - s->top)
		i++;
	return (i);
}

int	get_target_pos(t_stack *a, int b_val)
{
	int	i;
	int	target;

	i = -1;
	target = a->size + 1;
	while (++i < a->size - a->top)
	{
		if ((a->stack[a->top + i] > b_val) && (a->stack[a->top + i] < target))
			target = a->stack[a->top + i];
	}
	if (target != a->size + 1)
		return (get_pos(target, a));
	i = -1;
	while (++i < a->size - a->top)
	{
		if (a->stack[a->top + i] < target)
			target = a->stack[a->top + i];
	}
	return (get_pos(target, a));
}

int	cost(int pos, t_stack *s)
{
	int	stack_size;

	stack_size = s->size - s->top;
	if (pos > stack_size / 2)
		return (pos - stack_size);
	else
		return (pos);
}

int	total_cost(int b, t_pushswap *ps)
{
	int	a_cost;
	int	b_cost;
	int	tot;

	a_cost = cost(get_target_pos(ps->a, b), ps->a);
	b_cost = cost(get_pos(b, ps->b), ps->b);
	tot = abs(a_cost) + abs(b_cost);
	return (tot);
}

int	cheapest_b(t_pushswap *ps)
{
	int	cost;
	int	best;
	int	i;
	int	b;

	i = -1;
	cost = 2 * ps->b->size;
	b = ps->b->stack[ps->b->top];
	while (++i < ps->b->size - ps->b->top)
	{
		best = total_cost(ps->b->stack[ps->b->top + i], ps);
		if (best < cost)
		{
			cost = best;
			b = ps->b->stack[ps->b->top + i];
		}
	}
	return (b);
}
