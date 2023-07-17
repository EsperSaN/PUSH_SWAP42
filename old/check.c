/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:04:29 by pruenrua          #+#    #+#             */
/*   Updated: 2023/06/28 15:11:41 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_stack(t_var var)
{
	printf("------------------------------------------------\n");
	printf("[A] =");
	while (var.a)
	{
		printf(" [%d] ", var.a->value);
		var.a = var.a->next;
	}
	printf("\n[B] =");
	while(var.b)
	{
		printf(" [%d] ", var.b->value);
		var.b = var.b->next;
	}
	printf("\n");
}
