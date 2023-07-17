/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 01:29:26 by root              #+#    #+#             */
/*   Updated: 2023/07/17 01:35:12 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	av_checker(char	**av)
{
	int		i;
	int		j;
	long	value;

	if (!av)
		return ;
	i = 0;
	while (av[++i])
	{
		if (av[i] == NULL || ft_strlen(av[i]) == 0 || is_all_space(av[i]) || count_op(av[i]) > 1)
			error_exit(255, "the null or \" \" is unacceptable\n");
		j = -1;
		while (av[i][++j])
		{
			if (!is_allow(av[i][j]))
				error_exit(255, "only the number and one operator is allow\n");
			if (av[i][j] == '-' || av[i][j] == '+')
			{
				if (!is_num(av[i][j + 1]))
					error_exit(255, "only number allow next to operator\n");
			}
			value = ft_atoi(av[i]);
			if (value < INT_MIN || value > INT_MAX)
				error_exit(255, "the input is beyond the INT try again\n");
		}
	}
}
