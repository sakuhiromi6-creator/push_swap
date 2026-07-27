/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operationsS.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 00:18:27 by sara              #+#    #+#             */
/*   Updated: 2026/07/27 03:53:57 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	swap(t_stack *s)
{
	int	tmp;

	if (s->size < 2)
		return ;
	tmp = s->top->value;
	s->top->value = s->top->next->value;
	s->top->next->value = tmp;
}

void	sa(t_stack *a, t_count *count)
{
	count->sa++;
	count->total++;
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_stack *b, t_count *count)
{
	count->sb++;
	count->total++;
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b, t_count *count)
{
	count->ss++;
	count->total++;
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}
