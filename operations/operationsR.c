/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operationsR.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 15:37:21 by sasdyo            #+#    #+#             */
/*   Updated: 2026/07/27 03:57:36 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	rotate(t_stack *s)
{
	t_node	*tmp;
	t_node	*last;

	if (s->size < 2)
		return ;
	tmp = s->top;
	s->top = s->top->next;
	last = s->top;
	while (last->next != NULL)
		last = last->next;
	last->next = tmp;
	tmp->next = NULL;
}

void	ra(t_stack *a, t_count *count)
{
	count->ra++;
	count->total++;
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack *b, t_count *count)
{
	count->rb++;
	count->total++;
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b, t_count *count)
{
	count->rr++;
	count->total++;
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
