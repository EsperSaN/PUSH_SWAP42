/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:04:29 by pruenrua          #+#    #+#             */
/*   Updated: 2023/06/24 23:01:31 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_stack(t_var var)
{
	printf("\nBOX A | BOX B\n\n\n");
	int i = -1;
	while (var.a)
	{
		printf("loop [%d]", ++i);
		printf("  [%d] index [%d]|", var.a->value, var.a->index);
		if (var.a)
			var.a = var.a->next;
		if (var.b)
		{
			printf(" [%d] index [%d]\n", var.b->value, var.b->index);
			var.b = var.b->next;
		}
		else
			printf("  [ ] \n");
	}
}
