/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlentz <qlentz@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:48:09 by qlentz            #+#    #+#             */
/*   Updated: 2022/11/11 16:15:07 by qlentz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(int i, t_pushswap *ps)
{
	int	temp;

	if (ps->a->size - ps->a->top > 1)
	{
		temp = ps->a->stack[ps->a->top];
		ps->a->stack[ps->a->top] = ps->a->stack[(ps->a->top) + 1];
		ps->a->stack[(ps->a->top) + 1] = temp;
		if (i > 0)
			ft_printf("sa\n");
	}
}

void	sb(int i, t_pushswap *ps)
{
	int	temp;

	if (ps->b->size - ps->b->top > 1)
	{
	temp = ps->b->stack[ps->b->top];
	ps->b->stack[ps->b->top] = ps->b->stack[(ps->b->top) + 1];
	ps->b->stack[(ps->b->top) + 1] = temp;
		if (i > 0)
			ft_printf("sb\n");
	}
}

void	ss(t_pushswap *ps)
{
	sa(0, ps);
	sb(0, ps);
	ft_printf("ss");
}
