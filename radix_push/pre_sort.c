/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 05:23:16 by root              #+#    #+#             */
/*   Updated: 2023/07/23 03:19:22 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_min_no_index(t_stack *stack, int size)
{
	int	i;
	int	lowest;

	i = 0;
	lowest = 0;
	while (stack[lowest].index != -1)
	{
		lowest++;
	}
	while (i <= size)
	{
		if (stack[lowest].value > stack[i].value && stack[i].index == -1)
			lowest = i;
		i++;
	}
	return (lowest);
}

void	pre_sort_index(t_var	*var)
{
	int	index;

	index = 0;
	while (index <= var->max_index)
	{
		var->a[find_min_no_index(var->a, var->max_index)].index = index;
		index++;
	}
}
