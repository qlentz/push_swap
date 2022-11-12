/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlentz <qlentz@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:16:06 by qlentz            #+#    #+#             */
/*   Updated: 2022/11/11 16:23:42 by qlentz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(int n, t_pushswap *ps)
{
	int		i;
	t_stack	*ns;

	i = 1;
	if (ps->a->size - ps->a->top > 1)
	{
		ns = empty(ps->a->size + 1);
		if (!ns)
		{
			free_ps(ps);
			error("malloc error");
		}
		ns->top = ps->a->top;
		while (i < ps->a->size - ps->a->top)
		{
			ns->stack[ns->top + i] = ps->a->stack[ps->a->top + i - 1];
			i++;
		}
		ns->stack[ns->top] = ps->a->stack[ns->size - 1];
		free(ps->a->stack);
		free(ps->a);
		ps->a = ns;
		if (n > 0)
			ft_printf("rra\n");
	}
}

void	rrb(int n, t_pushswap *ps)
{
	int		i;
	t_stack	*ns;

	i = 1;
	if (ps->b->size - ps->b->top > 1)
	{
		ns = empty(ps->b->size + 1);
		if (!ns)
		{
			free_ps(ps);
			error("malloc error");
		}
		ns->top = ps->b->top;
		while (i < ps->b->size - ps->b->top)
		{
			ns->stack[ns->top + i] = ps->b->stack[ps->b->top + i - 1];
			i++;
		}
		ns->stack[ns->top] = ps->b->stack[ns->size - 1];
		free(ps->b->stack);
		free(ps->b);
		ps->b = ns;
		if (n > 0)
			ft_printf("rrb\n");
	}
}

void	rrr(t_pushswap *ps)
{
	rra(0, ps);
	rrb(0, ps);
	ft_printf("rrr\n");
}
