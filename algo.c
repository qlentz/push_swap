/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlentz <qlentz@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 21:48:46 by qlentz            #+#    #+#             */
/*   Updated: 2022/11/12 23:07:05 by qlentz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bad_algo(t_pushswap *ps)
{
	int	i;

	i = 0;
	while (i < ps->a->size)
	{
		while (ps->a->stack[ps->a->top] != i + 1)
		{
			ra(1, ps);
		}
		pb(ps);
		i++;
	}
	i = 0;
	while (i < ps->a->size)
	{
		pa(ps);
		i++;
	}
}