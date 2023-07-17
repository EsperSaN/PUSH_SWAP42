/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 05:23:16 by root              #+#    #+#             */
/*   Updated: 2023/07/17 10:50:16 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_min_no_index(t_stack *stack, int size)
{
	int i;
	int lowest;

	i = 0;
	lowest = 0;
	while (stack[lowest].index != -1)
	{
		lowest++;
	}

	while(i <= size)
	{
		//printf("check for [%d]index[%d] and [%d]index[%d]\n", stack[lowest].value, lowest, stack[i].value, i);
		if (stack[lowest].value > stack[i].value && stack[i].index == -1)
			lowest = i;
		i++;
	}
	return(lowest);
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
