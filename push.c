/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlentz <qlentz@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:08:35 by qlentz            #+#    #+#             */
/*   Updated: 2022/11/11 16:12:00 by qlentz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_pushswap *ps)
{
	if (ps->b->top < ps->b->size)
	{
		ps->a->top -= 1;
		ps->a->stack[ps->a->top] = ps->b->stack[ps->b->top];
		ps->b->top += 1;
		ft_printf("pa\n");
	}
}

void	pb(t_pushswap *ps)
{
	if (ps->a->top < ps->a->size)
	{
		ps->b->top -= 1;
		ps->b->stack[ps->b->top] = ps->a->stack[ps->a->top];
		ps->a->top += 1;
		ft_printf("pb\n");
	}
}
