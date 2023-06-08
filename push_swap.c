/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:03:46 by pruenrua          #+#    #+#             */
/*   Updated: 2023/06/08 15:17:40 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_var	var;
	
	if (ac == 1)
		return (1);
	
	av_checker(av);
	printf("check PASS!!\n");
	
	var.joined_av = av_joiner(av);
	printf("joined OK input = [%s]\n", var.joined_av);
	
	stack_init(&var);
}
