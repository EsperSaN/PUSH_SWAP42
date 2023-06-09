/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:04:29 by pruenrua          #+#    #+#             */
/*   Updated: 2023/06/09 17:43:14 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_stack(t_var *var)
{
	printf("\nBOX A | BOX B\n\n\n");
	while (var->a)
	{
		printf("  [%d] [%s]|", var->a->value, var->a->bit_str);
		if (var->a)
			var->a = var->a->next;
		if (var->b)
		{
			printf(" [%d] [%s] \n", var->b->value, var->b->bit_str);
			var->b = var->b->next;
		}
		else
			printf("  [ ] \n");
	}
	/*while (var->b)
	{
		printf("[%d] ", var->b->value);
		if (var->b)
			var->b = var->a->next;
	}*/
}