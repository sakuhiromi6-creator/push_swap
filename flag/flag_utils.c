/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 03:37:12 by sara              #+#    #+#             */
/*   Updated: 2026/09/13 16:37:57 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_flags(int argc, char **argv)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	while (i < argc && ft_strncmp(argv[i], "--", 2) == 0)
	{
		count++;
		i++;
	}
	return (count);
}

char	**build_numbers(int argc, char **argv)
{
	int	flags;

	flags = count_flags(argc, argv);
	if (flags > 0)
		return (create_numbers_array(argc - flags, argv + flags));
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
