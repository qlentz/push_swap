/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlentz <qlentz@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:46:53 by qlentz            #+#    #+#             */
/*   Updated: 2022/11/15 11:29:52 by qlentz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_biggest(int n, t_stack *s)
{
	int	i;

	i = -1;
	while (++i < s->size)
	{
		if (s->stack[i] > n)
			return (0);
	}
	return (1);
}

int abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

int	get_lowest_index_position(t_stack *s)
{
	int		lowest_val;
	int		lowest_i;
	int		i;

	i = 0;
	lowest_val = s->size;
	lowest_i = 0;
	while (i < s->size - s->top)
	{
		if (s->stack[s->top + i] < lowest_val)
		{
			lowest_val = s->stack[s->top + i];
			lowest_i = i;
		}
		i++;
	}
	return (lowest_i);
}

void	print_stack(t_stack *s)
{
	int	i;

	i = -1;
	while (++i < s->size)
	{
		ft_printf("%i\n", s->stack[i]);
	}
}

int	check_double(t_stack *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < s->size)
	{
		while (j < i)
		{
			if (s->stack[j] == s->stack[i])
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}