/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:03:22 by pruenrua          #+#    #+#             */
/*   Updated: 2023/06/08 14:24:06 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_num(char c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

int	is_space(char c)
{
	if (c == 32 || c == 10)
		return (1);
	return (0);
}

int	is_allow(char c)
{
	if (!is_num(c) && c != '-' && c != '+' && !is_space(c))
		return (0);
	else
		return (1);
}

void	av_checker(char	**av)
{
	int	i;
	int	j;

	if (!av)
		return ;
	j = 0;
	i = 0;
	while (av[++i])
	{
		if (av[i] == NULL || ft_strlen(av[i]) == 0)
			error_exit(255);
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == '-' || av[i][j] == '+')
			{
				if (!is_num(av[i][j + 1]))
					error_exit(255);
			}
			if (!is_allow(av[i][j]))
				error_exit(255);
			j++;
		}
	}
}
