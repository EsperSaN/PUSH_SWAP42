/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:04:29 by pruenrua          #+#    #+#             */
/*   Updated: 2023/06/08 16:08:08 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_stack(t_var *var)
{
	while (var->a)
	{
		printf("[%d] ------- [%d]\n", var->a->value, var->b->value);
		if (var->a)
			var->a = var->a->next;
		if (var->b)
			var->b = var->b->next;
	}
}