/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:42:14 by root              #+#    #+#             */
/*   Updated: 2023/07/23 20:14:13 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_var	var;

	if (ac == 1)
		return (0);
	argv_checker(av);
	var.joined_av = av_joiner(av);
	stack_init(&var);
	pre_sort_index(&var);
	sorting_stack(var);
	free_var(&var);
}
