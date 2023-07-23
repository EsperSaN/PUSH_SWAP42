/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 01:29:26 by root              #+#    #+#             */
/*   Updated: 2023/07/23 22:04:11 by pruenrua         ###   ########.fr       */
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
	if (c == 32 || c == '\t' || c == '\n' 
		|| c == '\v' || c == '\f' || c == '\r')
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
			return (0);
		str++;
	}
	return (1);
}
