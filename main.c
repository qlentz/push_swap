/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlentz <qlentz@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:58:07 by qlentz            #+#    #+#             */
/*   Updated: 2022/11/15 11:01:35 by qlentz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_pushswap	ps;

	ps = ps_init(ac, av);
	//print_stack(ps.a);
	sort(&ps);
	free_ps(&ps);
	return (0);
}
