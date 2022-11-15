/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlentz <qlentz@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:00:20 by qlentz            #+#    #+#             */
/*   Updated: 2022/11/15 11:05:13 by qlentz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small_algo(t_pushswap *ps)
{
	if (is_biggest(ps->a->stack[ps->a->top], ps->a) == 1)
		ra(1,ps);
	else if (is_biggest(ps->a->stack[ps->a->top + 1], ps->a) == 1)
		rra(1,ps);
	if (ps->a->stack[ps->a->top] > ps->a->stack[ps->a->top + 1])
		sa(1,ps);
}

void	push_save_3(t_pushswap *ps)
{
	int	a_size;
	int	pushed;
	int	i;

	a_size = ps->a->size - ps->a->top;
	pushed = 0;
	i = 0;
	while (a_size > 6 && i < a_size && pushed < a_size / 2)
	{
		if (ps->a->stack[ps->a->top] <= a_size / 2)
		{
			pb(ps);
			pushed++;
		}
		else
			ra(1, ps);
		i++;
	}
	while (a_size - pushed > 3)
	{
		pb(ps);
		pushed++;
	}
}

void	shift_stack(t_pushswap *ps)
{
	int	lowest_pos;
	int	stack_size;

	stack_size = ps->a->size - ps->a->top;
	lowest_pos = get_lowest_index_position(ps->a);
	if (lowest_pos > stack_size / 2)
	{
		while (lowest_pos < stack_size)
		{
			rra(1, ps);
			lowest_pos++;
		}
	}
	else
	{
		while (lowest_pos > 0)
		{
			ra(1, ps);
			lowest_pos--;
		}
	}
}

void	sort(t_pushswap *ps)
{
	push_save_3(ps);
	small_algo(ps);
	while (ps->b->size - ps->b->top > 0)
	{
		best_move(cheapest_b(ps), ps);
	}
	if (!is_sorted(ps->a))
		shift_stack(ps);
}