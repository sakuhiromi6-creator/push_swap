/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasdyo <sasdyo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 22:43:11 by sasdyo            #+#    #+#             */
/*   Updated: 2026/07/05 03:32:04 by sasdyo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

//inizializzare lo stack a vuoto
void	init_stack(t_stack *stack)
{
	stack->top = NULL;
	stack->size = 0;
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (argc < 2)
		return (0);
	init_stack(&a);
	init_stack(&b);
	pars_args(argc, argv);
	not_double(argc, argv);
	build_stack(argc, argv, &a);
	free_stack(&a);
	free_stack(&b);
	return (0);
}

/*
da mettere nel main per debug
print_stack(&a);
	sa(&a);
	print_stack(&a);
*/