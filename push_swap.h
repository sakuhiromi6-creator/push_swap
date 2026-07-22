/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorasan <kcorasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 22:41:40 by sasdyo            #+#    #+#             */
/*   Updated: 2026/07/22 20:07:35 by kcorasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	t_node			*top;
	int				size;
}					t_stack;

void				init_stack(t_stack *stack);
int					pars_args(char **numbers);
int					not_double(char **numbers);
int					check_range(char *str);
int					limit_case(char *str);
int					valid_num(char *str);
int					build_stack(char **numbers, t_stack *a);
int					is_sorted(t_stack *a);

// Operations
void				rev_rotate(t_stack *s);
void				rra(t_stack *a);
void				rrb(t_stack *b);
void				rrr(t_stack *a, t_stack *b);
void				push(t_stack *src, t_stack *dest);
void				pa(t_stack *a, t_stack *b);
void				pb(t_stack *a, t_stack *b);
void				rotate(t_stack *s);
void				ra(t_stack *a);
void				rb(t_stack *b);
void				rr(t_stack *a, t_stack *b);
void				swap(t_stack *s);
void				sa(t_stack *a);
void				sb(t_stack *b);
void				ss(t_stack *a, t_stack *b);
void				free_stack(t_stack *s);

// parser_utils
void				free_split(char **split);
int					count_numbers(int argc, char **argv);
char				**create_numbers_array(int argc, char **argv);

//sort_utils
void				simple_sort(t_stack *a, t_stack *b);

#endif