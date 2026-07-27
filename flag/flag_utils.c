/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 03:37:12 by sara              #+#    #+#             */
/*   Updated: 2026/07/27 12:10:26 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**build_numbers(int argc, char **argv)
{
	if (has_flag(argc, argv, "--bench") || has_flag(argc, argv, "--simple")
		|| has_flag(argc, argv, "--medium") || has_flag(argc, argv, "--complex")
		|| has_flag(argc, argv, "--adaptive"))
		return (create_numbers_array(argc - 1, argv + 1));
	return (create_numbers_array(argc, argv));
}

int	has_flag(int argc, char **argv, char *flag)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_strncmp(argv[i], flag, ft_strlen(flag)) == 0)
			return (1);
		i++;
	}
	return (0);
}
