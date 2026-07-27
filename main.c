/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 19:56:55 by sara              #+#    #+#             */
/*   Updated: 2026/07/27 03:47:38 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

// inizializzare lo stack a vuoto
void	init_stack(t_stack *stack)
{
	stack->top = NULL;
	stack->size = 0;
}

static void	free_all(char **numbers, t_stack *a, t_stack *b)
{
	free_split(numbers);
	if (a)
		free_stack(a);
	if (b)
		free_stack(b);
}

// controllino per valid
static int	check_input(char **numbers)
{
	if (!pars_args(numbers) || !not_double(numbers))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (1);
}

// qui manca la parte dell'algoritmo dopo is_sorted
int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	t_count count;
	char	**numbers;

	ft_memset(&count, 0, sizeof(t_count));
	if (argc < 2)
		return (0);
	numbers = build_numbers(argc, argv);
	if (!numbers)
		return (write(2, "Error\n", 6), 1);
	if (!check_input(numbers))
		return (free_all(numbers, NULL, NULL), 1);
	init_stack(&a);
	init_stack(&b);
	if (!build_stack(numbers, &a))
		return (free_all(numbers, &a, &b), 1);
	if (is_sorted(&a))
		return (free_all(numbers, &a, &b), 0);
	count.disorder = disorder(&a);
	adaptive_sort(&a, &b, &count);
	if (has_flag(argc, argv, "--bench"))
    	print_bench(&count);
	free_all(numbers, &a, &b);
	return (0);
}
