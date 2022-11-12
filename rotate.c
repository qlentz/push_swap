/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlentz <qlentz@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:44:10 by qlentz            #+#    #+#             */
/*   Updated: 2022/11/11 16:11:50 by qlentz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(int n, t_pushswap *ps)
{
	int		i;
	t_stack	*ns;

	i = 0;
	if (ps->a->size - ps->a->top > 1)
	{
		ns = empty(ps->a->size + 1);
		if (!ns)
		{
			free_ps(ps);
			error("malloc error");
		}
		ns->top = ps->a->top;
		while (i < ps->a->size - ps->a->top - 1)
		{
			ns->stack[ns->top + i] = ps->a->stack[ps->a->top + i + 1];
			i++;
		}
		ns->stack[ns->size - 1] = ps->a->stack[ns->top];
		free(ps->a->stack);
		free(ps->a);
		ps->a = ns;
		if (n > 0)
			ft_printf("ra\n");
	}
}

void	rb(int n, t_pushswap *ps)
{
	int		i;
	t_stack	*ns;

	i = 0;
	if (ps->b->size - ps->b->top > 1)
	{
		ns = empty(ps->b->size + 1);
		if (!ns)
		{
			free_ps(ps);
			error("malloc error");
		}
		ns->top = ps->b->top;
		while (i < ps->b->size - ps->b->top - 1)
		{
			ns->stack[ns->top + i] = ps->b->stack[ps->b->top + i + 1];
			i++;
		}
		ns->stack[ns->size - 1] = ps->b->stack[ns->top];
		free(ps->b->stack);
		free(ps->b);
		ps->b = ns;
		if (n > 0)
			ft_printf("rb\n");
	}
}

void	rr(t_pushswap *ps)
{
	ra(0, ps);
	rb(0, ps);
	ft_printf("rr\n");
}
