/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operationsRR.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasdyo <sasdyo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 22:37:55 by sasdyo            #+#    #+#             */
/*   Updated: 2026/07/04 23:44:16 by sasdyo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	rev_rotate(t_stack *s)
{
	t_node	*tmp;
	t_node	*prev;

	if (s->size < 2)
		return ;
	prev = s->top;
	while (prev->next->next != NULL)
		prev = prev->next;
	tmp = prev->next;
	prev->next = NULL;
	tmp->next = s->top;
	s->top = tmp;
}

void	rra(t_stack *a)
{
	rev_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	rev_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	rev_rotate(a);
	rev_rotate(b);
	write(1, "rrr\n", 4);
}
