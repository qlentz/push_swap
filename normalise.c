/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalise.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlentz <qlentz@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 22:35:45 by qlentz            #+#    #+#             */
/*   Updated: 2022/11/15 17:34:26 by qlentz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_pos(int n, t_stack *s)
{
	int	i;
	int	norm;

	i = 0;
	norm = 0;
	while (i < s->size)
	{
		if (s->stack[i] < n)
			norm++;
		i++;
	}
	norm++;
	return (norm);
}

t_stack	*normalise(t_stack *s)
{
	t_stack	*new;
	int		i;

	i = 0;
	new = empty(s->size + 1);
	while (i < s->size)
	{
		new->stack[i] = count_pos(s->stack[i], s);
		i++;
	}
	new->top = s->top;
	free_stack(s);
	return (new);
}
