/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:42:14 by root              #+#    #+#             */
/*   Updated: 2023/07/17 12:05:46 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_var	var;

	if (ac == 1)
		return (1);

	//done
	av_checker(av); // check each arg and value is acceptable? and is_dup is here
	//printf("check PASS!!\n");

	var.joined_av = av_joiner(av); // malloc
	//printf("joined OK input = [%s]\n", var.joined_av);
	
	stack_init(&var); // init to linklist and check for the << malloc
	//printf("init to the stack scc max index = [%d]\n", var.max_index);
	pre_sort_index(&var);
	//check_stack(var);
	sorting_stack(var);
	free_var(&var);
}