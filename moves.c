/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlentz <qlentz@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:36:32 by qlentz            #+#    #+#             */
/*   Updated: 2022/11/15 17:36:32 by qlentz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_rrr(t_pushswap *ps, int *m_a, int *m_b)
{
	while (*m_a < 0 && *m_b < 0)
	{
		rrr(ps);
		*m_a += 1;
		*m_b += 1;
	}
}

void	do_rr(t_pushswap *ps, int *m_a, int *m_b)
{
	while (*m_a > 0 && *m_b > 0)
	{
		rr(ps);
		*m_a -= 1;
		*m_b -= 1;
	}
}

void	do_ro(t_pushswap *ps, int *m_a, int *m_b)
{
	while (*m_a > 0 || *m_b > 0)
	{
		if (*m_a > 0)
		{
			ra(1, ps);
			*m_a -= 1;
		}
		if (*m_b > 0)
		{
			rb(1, ps);
			*m_b -= 1;
		}
	}
}

void	do_rro(t_pushswap *ps, int *m_a, int *m_b)
{
	while (*m_a < 0 || *m_b < 0)
	{
		if (*m_a < 0)
		{
			rra(1, ps);
			*m_a += 1;
		}
		if (*m_b < 0)
		{
			rrb(1, ps);
			*m_b += 1;
		}
	}
}

void	best_move(int b, t_pushswap *ps)
{
	int	*m;

	m = (int *)malloc(sizeof(int) * 2);
	if (!m)
	{
		free_ps(ps);
		error("Malloc error");
	}
	m[0] = cost(get_target_pos(ps->a, b), ps->a);
	m[1] = cost(get_pos(b, ps->b), ps->b);
	if (m[0] < 0 && m[1] < 0)
		do_rrr(ps, &m[0], &m[1]);
	if (m[0] > 0 && m[1] > 0)
		do_rr(ps, &m[0], &m[1]);
	do_ro(ps, &m[0], &m[1]);
	do_rro(ps, &m[0], &m[1]);
	free(m);
	pa(ps);
}
