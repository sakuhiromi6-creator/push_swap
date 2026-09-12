/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 03:37:12 by sara              #+#    #+#             */
/*   Updated: 2026/07/30 22:30:25 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**build_numbers(int argc, char **argv)
{
	if (has_flag(argv, "--bench") || has_flag(argv, "--simple")
		|| has_flag(argv, "--medium") || has_flag(argv, "--complex")
		|| has_flag(argv, "--adaptive"))
		return (create_numbers_array(argc - 1, argv + 1));
	return (create_numbers_array(argc, argv));
}

int	has_flag(char **argv, char *flag)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ft_strncmp(argv[i], flag, ft_strlen(flag)) == 0)
			return (1);
		i++;
	}
	return (0);
}
