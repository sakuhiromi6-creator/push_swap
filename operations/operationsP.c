/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operationsP.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 04:49:40 by sasdyo            #+#    #+#             */
/*   Updated: 2026/07/27 03:58:57 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	push(t_stack *src, t_stack *dest)
{
	t_node	*tmp;

	if (src->size < 1)
		return ;
	tmp = src->top;
	src->top = src->top->next;
	tmp->next = dest->top;
	dest->top = tmp;
	src->size--;
	dest->size++;
}

void	pa(t_stack *a, t_stack *b, t_count *count)
{
	count->pa++;
	count->total++;
	push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b, t_count *count)
{
	count->pb++;
	count->total++;
	push(a, b);
	write(1, "pb\n", 3);
}
