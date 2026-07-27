/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 22:41:40 by sasdyo            #+#    #+#             */
/*   Updated: 2026/07/27 12:31:23 by sara             ###   ########.fr       */
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

typedef struct s_count
{
	int				total;

	int				sa;
	int				sb;
	int				ss;

	int				pa;
	int				pb;

	int				ra;
	int				rb;
	int				rr;

	int				rra;
	int				rrb;
	int				rrr;

	float			disorder;

	char			*strategy;
	char			*complexity;

}					t_count;

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
void				rra(t_stack *a, t_count *count);
void				rrb(t_stack *b, t_count *count);
void				rrr(t_stack *a, t_stack *b, t_count *count);
void				push(t_stack *src, t_stack *dest);
void				pa(t_stack *a, t_stack *b, t_count *count);
void				pb(t_stack *a, t_stack *b, t_count *count);
void				rotate(t_stack *s);
void				ra(t_stack *a, t_count *count);
void				rb(t_stack *b, t_count *count);
void				rr(t_stack *a, t_stack *b, t_count *count);
void				swap(t_stack *s);
void				sa(t_stack *a, t_count *count);
void				sb(t_stack *b, t_count *count);
void				ss(t_stack *a, t_stack *b, t_count *count);
void				free_stack(t_stack *s);

// parser_utils
void				free_split(char **split);
int					count_numbers(int argc, char **argv);
int					count_split(char **argv, int i);
char				**create_numbers_array(int argc, char **argv);

// sort_utils
float				disorder(t_stack *a);
void				simple_sort(t_stack *a, t_stack *b, t_count *count);
void				adaptive_sort(t_stack *a, t_stack *b, t_count *count);
void				complex_sort(t_stack *a, t_stack *b, t_count *count);
void				medium_sort(t_stack *a, t_stack *b, t_count *count);

// bench
void				print_operations(t_count *count);
void				ft_putfloat_fd(float n, int fd);
void				print_strategy(t_count *count);
void				print_disorder(t_count *count);
void				print_bench(t_count *count);
void				print_ops_line1(t_count *count);
void				print_ops_line2(t_count *count);
int					has_flag(int argc, char **argv, char *flag);

char				**build_numbers(int argc, char **argv);

#endif