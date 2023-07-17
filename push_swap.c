/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:03:46 by pruenrua          #+#    #+#             */
/*   Updated: 2023/07/17 01:27:54 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_no_index(t_stack *stack, int size)
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

int	main(int ac, char **av)
{
	t_var	var;

	if (ac == 1)
		return (1);

	av_checker(av);
	printf("check PASS!!\n");

	var.joined_av = av_joiner(av);
	printf("joined OK input = [%s]\n", var.joined_av);
	
	stack_init(&var); // init to linklist and check for the << malloc
	printf("init to the stack scc max index = [%d]\n", var.max_index);
	
	pre_sort_index(&var);

	check_stack(var);

	sorting_stack(var);
	free_var(&var);
}