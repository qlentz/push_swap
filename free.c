/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlentz <qlentz@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 22:30:29 by qlentz            #+#    #+#             */
/*   Updated: 2022/11/12 22:33:41 by qlentz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *s)
{
	free(s->stack);
	free(s);
}

void	free_ps(t_pushswap *ps)
{
	free_stack(ps->a);
	free_stack(ps->b);
}
