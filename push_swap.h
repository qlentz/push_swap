/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlentz <qlentz@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:56:35 by qlentz            #+#    #+#             */
/*   Updated: 2022/11/12 22:45:07 by qlentz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack {
	int	*stack;
	int	size;
	int	top;
}				t_stack;

typedef struct s_pushswap {
	t_stack	*a;
	t_stack	*b;
}				t_pushswap;

void		error(char *s);
void		free_stack(t_stack *s);
void		free_ps(t_pushswap *ps);
int			format_ok(char **av);
int			is_sorted(t_stack *stack);
t_stack		*parse_args(int ac, char **av);
t_stack		*empty(int ac);
t_pushswap	ps_init(int ac, char **av);
int			count_pos(int n, t_stack *s);
t_stack		*normalise(t_stack *s);
void		sa(int i, t_pushswap *ps);
void		sb(int i, t_pushswap *ps);
void		ss(t_pushswap *ps);
void		pa(t_pushswap *ps);
void		pb(t_pushswap *ps);
void		ra(int n, t_pushswap *ps);
void		rb(int n, t_pushswap *ps);
void		rr(t_pushswap *ps);
void		rra(int n, t_pushswap *ps);
void		rrb(int n, t_pushswap *ps);
void		rrr(t_pushswap *ps);
void		bad_algo(t_pushswap *ps);

#endif