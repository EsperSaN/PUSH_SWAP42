/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:42:14 by root              #+#    #+#             */
/*   Updated: 2023/07/23 02:02:56 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_var	var;

	if (ac == 1)
		return (1);
	var.joined_av = av_joiner(av);
	stack_init(&var);
	pre_sort_index(&var);
	sorting_stack(var);
	free_var(&var);
}
