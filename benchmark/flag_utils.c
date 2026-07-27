/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 03:37:12 by sara              #+#    #+#             */
/*   Updated: 2026/07/27 03:42:59 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char    **build_numbers(int argc, char **argv)
{
    if (has_flag(argc, argv, "--bench") || has_flag(argc, argv, "--simple")  
        || has_flag(argc, argv, "--medium") || has_flag(argc, argv, "--complex")
        || has_flag(argc, argv, "--adaptive"))
            return(create_numbers_array(argc - 1, argv + 1));
    return(create_numbers_array(argc, argv));
}