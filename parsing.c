/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasdyo <sasdyo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 22:53:29 by sasdyo            #+#    #+#             */
/*   Updated: 2026/07/04 23:53:40 by sasdyo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

//gestisce i casi con + e -
int	check_range(char *str)
{
	if (str[0] == '+')
	{
		if (ft_strlen(str) == 11)
			if (ft_strncmp(str + 1, "2147483647", 10) > 0)
				return (0);
	}
	if (str[0] == '-')
	{
		if (ft_strlen(str) == 11)
			if (ft_strncmp(str + 1, "2147483648", 10) > 0)
				return (0);
	}
	else if (str[0] != '+' && str[0] != '-')
	{
		if (ft_strlen(str) == 10)
			if (ft_strncmp(str, "2147483647", 10) > 0)
				return (0);
	}
	return (1);
}

//gestisce il caso senza segno e chiama check_range
int	limit_case(char *str)
{
	if (str[0] == '+' || str[0] == '-')
	{
		if (ft_strlen(str) > 11)
			return (0);
	}
	else
	{
		if (ft_strlen(str) > 10)
			return (0);
	}
	return (check_range(str));
}

// controlla che la stringa sia un intero valido,
// // fatta di cifre con segno se c'è
int	valid_num(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	if (str[i] == '+' || str[i] == '-')
	{
		i++;
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] != '\0')
		return (0);
	if (limit_case(str) == 0)
		return (0);
	return (1);
}

// scorre tutti gli argomenti e controlla tramite validnum se sono validi,
// altrimenti stampa errore

int	pars_args(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (valid_num(argv[i]) == 0)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		i++;
	}
	return (1);
}

// controlla che non ci siano dubplicati
int	not_double(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
			{
				write(2, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		i++;
	}
	return (1);
}
