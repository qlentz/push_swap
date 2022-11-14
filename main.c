/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlentz <qlentz@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:58:07 by qlentz            #+#    #+#             */
/*   Updated: 2022/11/14 23:16:54 by qlentz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_pushswap	ps;

	ps = ps_init(ac, av);
	print_stack(ps.a);
	sort(&ps);
	print_stack(ps.a);
	free_ps(&ps);
	return (0);
}
