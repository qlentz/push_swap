/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlentz <qlentz@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:41:53 by qlentz            #+#    #+#             */
/*   Updated: 2022/11/09 00:01:41 by qlentz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	format_ok(const char *s)
{
	if (*s == '+' || *s == '-')
		s++;
	while (*s)
	{
		if (!ft_isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}
int	*parse_args(int ac, char **av)
{
	int	i;
	int	*stack;

	i = -1;
	stack = (int *)malloc(sizeof(int) * (ac - 1))
	while (av[++i])
	{
		
		
	}
}