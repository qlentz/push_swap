/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlentz <qlentz@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:58:07 by qlentz            #+#    #+#             */
/*   Updated: 2022/11/16 22:40:38 by qlentz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_pushswap	ps;

	if (ac == 1)
		return (0);
	ps = ps_init(ac, av);
	if (is_sorted(ps.a))
		return (0);
	sort(&ps);
	free_ps(&ps);
	return (0);
}
