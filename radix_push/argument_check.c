/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 01:29:26 by root              #+#    #+#             */
/*   Updated: 2023/07/23 03:22:04 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	av_checker(char	**av)
{
	int		i;
	int		j;
	long	value;

	i = -1;
	while (av[++i])
	{
		if (av[i] == NULL || ft_strlen(av[i]) == 0 || ft_strlen(av[i]) > 11
			|| is_all_space(av[i]) || count_op(av[i]) > 1)
			error_exit(255, NULLEXIT, av);
		j = -1;
		while (av[i][++j])
		{
			if (!is_allow(av[i][j]))
				error_exit(255, NUMOPEXIT, av);
			if (av[i][j] == '-' || av[i][j] == '+')
			{
				if (!is_num(av[i][j + 1]))
					error_exit(255, EXOPEXIT, av);
			}
			value = ft_atoi(av[i]);
			if (value < -2147483648 || value > 2147483647)
				error_exit(255, OVERFLOW, av);
		}
	}
}
