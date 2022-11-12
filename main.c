/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlentz <qlentz@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:58:07 by qlentz            #+#    #+#             */
/*   Updated: 2022/11/12 23:02:27 by qlentz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *s);

int	main(int ac, char **av)
{
	t_pushswap	ps;

	ps = ps_init(ac, av);
	if (is_sorted(ps.a) == 1)
		return (0);
	//print_stack(ps.a);
	bad_algo(&ps);
	//ft_printf("sorted:%i", is_sorted(ps.a));
	//print_stack(ps.a);
	free_ps(&ps);
	return (0);
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
