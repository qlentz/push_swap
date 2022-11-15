/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlentz <qlentz@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:56:35 by qlentz            #+#    #+#             */
/*   Updated: 2022/11/15 17:53:26 by qlentz           ###   ########.fr       */
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

int			abs(int n);
void		error(char *s);
void		print_stack(t_stack *s);
void		free_stack(t_stack *s);
void		free_ps(t_pushswap *ps);
int			format_ok(char **av);
int			is_sorted(t_stack *stack);
int			check_double(t_stack *s);
int			is_biggest(int n, t_stack *s);
t_stack		*parse_args(int ac, char **av);
t_stack		*one_arg(char *args);
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
void		do_rrr(t_pushswap *ps, int *m_a, int *m_b);
void		do_rr(t_pushswap *ps, int *m_a, int *m_b);
void		do_ro(t_pushswap *ps, int *m_a, int *m_b);
void		do_rro(t_pushswap *ps, int *m_a, int *m_b);
void		small_algo(t_pushswap *ps);
void		push_save_3(t_pushswap *ps);
int			get_lowest_index_position(t_stack *s);
int			get_pos(int n, t_stack *s);
int			get_target_pos(t_stack *a, int b_val);
int			cost(int pos, t_stack *s);
int			total_cost(int b, t_pushswap *ps);
int			cheapest_b(t_pushswap *ps);
void		best_move(int b, t_pushswap *ps);
void		shift_stack(t_pushswap *ps);
void		sort(t_pushswap *ps);

#endif