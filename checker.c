/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:03:22 by pruenrua          #+#    #+#             */
/*   Updated: 2023/06/09 20:46:42 by pruenrua         ###   ########.fr       */
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

int	is_dup(char **av)
{
	long	i;
	long	j;

	i = -1;
	while (av[++i])
	{
		j = i + 1; // nust be over flow ??
		while(av[j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				return(1);
			j++;
		}
	}
	return (0);
}

void	av_checker(char	**av)
{
	/* should add the above MAX or MIN INT and return immediattt*/
	int		i;
	int		j;
	long	value;

	if (!av)
		return ;
	i = 0;
	while (av[++i])
	{
		if (av[i] == NULL || ft_strlen(av[i]) == 0)
			error_exit(255, "the null or \" \" is unacceptable\n");
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == '-' || av[i][j] == '+')
			{
				if (!is_num(av[i][j + 1]))
					error_exit(255, "only the int is acceptable\n");
			}
			if (!is_allow(av[i][j]))
				error_exit(255, "only the int is acceptable\n");
			value = ft_atoi(av[i]);
			if (value < INT_MIN || value > INT_MAX)
				error_exit(255, "the input is beyond the INT try again\n");
			j++;
		}
	}
	if (is_dup(av))
		error_exit(255, "the arg is duplicate\n");
}
