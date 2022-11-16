/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlentz <qlentz@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:52:24 by qlentz            #+#    #+#             */
/*   Updated: 2022/11/16 15:47:37 by qlentz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(char *s)
{
	//ft_putstr_fd(s, STDERR_FILENO);
	//ft_putstr_fd("\n", STDERR_FILENO);
	(void)s;
	write(STDERR_FILENO, "Error\n", 6);
	exit(0);
}

