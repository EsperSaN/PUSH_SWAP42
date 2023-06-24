/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:03:22 by pruenrua          #+#    #+#             */
/*   Updated: 2023/06/24 22:57:43 by pruenrua         ###   ########.fr       */
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

//int	is_dup(char **av)
//{
//	long	i;
//	long	j;

//	i = 0;
//	while (av[++i])
//	{
//		j = i + 1; // nust be over flow ??
//		while (av[j])
//		{
//			printf("check the [%s] and [%s]\n", av[i],av[j]);
//			if (ft_atoi(av[i]) == ft_atoi(av[j]))
//				return (1);
//			j++;
//		}
//	}
//	return (0);
//}

int	count_op(char	*str)
{
	int	counter;

	counter = 0;
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == '-' || *str == '+')
			counter++;
		str++;
	}
	return (counter);
}

int	is_all_space(char	*str)
{
	while (*str)
	{
		if (!is_space(*str))
			return(0);
		str++;
	}
	return (1);
}

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
