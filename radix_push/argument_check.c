/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 01:29:26 by root              #+#    #+#             */
/*   Updated: 2023/07/23 22:37:25 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	argv_checker(char	**av)
{
	int		i;
	int		j;

	i = 0;
	while (av[++i])
	{
		if (av[i] == NULL || ft_strlen(av[i]) == 0
			|| is_all_space(av[i]))
			error_exit(255, NULLEXIT, NULL);
		j = -1;
		while (av[i][++j])
		{
			if (!is_allow(av[i][j]))
				error_exit(255, NUMOPEXIT, NULL);
			if (av[i][j] == '-' || av[i][j] == '+')
			{
				if (!is_num(av[i][j + 1]))
					error_exit(255, EXOPEXIT, NULL);
			}
		}
	}
}

void	av_checker(char	**av)
{
	int		i;
	int		j;
	long	value;

	i = -1;
	while (av[++i])
	{
		if (av[i] == NULL || count_op(av[i]) > 1)
			error_exit(255, NULLEXIT, av);
		j = -1;
		if (av[i][0] == '-' || av[i][0] == '+' || is_num(av[i][0]))
		{
			j = 1;
			while (av[i][j])
			{
				if (!is_num(av[i][j]))
					error_exit(255, EXOPEXIT, av);
				j++;
			}
		}
		value = ft_atoi(av[i]);
		if (value < -2147483648 || value > 2147483647)
			error_exit(255, OVERFLOW, av);
	}
}
