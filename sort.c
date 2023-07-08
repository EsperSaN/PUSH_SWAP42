/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:27:12 by pruenrua          #+#    #+#             */
/*   Updated: 2023/07/06 09:18:11 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_var	var)
{
	int	i;

	i = 0;
	while (i < var.max_index)
	{
		if (var.a[i].index > var.a[i + 1].index)
			return (0);
		i++;
	}
	return (1);
}
void	first_step_init(t_var var)
{
	pushb_until_three_highvalue(var);
}


void	sorting_stack(t_var	var)
{
	pushb_until_three_highvalue(var);
}