/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 20:45:23 by sara              #+#    #+#             */
/*   Updated: 2026/07/27 04:06:47 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	adaptive_sort(t_stack *a, t_stack *b, t_count *count)
{
	if (count->disorder < 0.2)
	{
		simple_sort(a, b, count);
		count->strategy = "simple";
		count->complexity = "O(n^2)";
	}
	else if (count->disorder < 0.5)
	{
		medium_sort(a, b, count);
		count->strategy = "medium";
		count->complexity = "O(n√n)";
	}
	else
	{
		complex_sort(a, b, count);
		count->strategy = "complex";
		count->complexity = "O(n log n)";
	}
}
