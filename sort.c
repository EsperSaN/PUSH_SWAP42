/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:27:12 by pruenrua          #+#    #+#             */
/*   Updated: 2023/06/26 20:24:51 by pruenrua         ###   ########.fr       */
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

void	sorting_stack(t_var	*var)
{
	if (is_sorted(*var))
		printf("already sored\n");
	else if ((var->max_index + 1) == 2)
		printf("sort 2\n");
	else
		printf("sort etc\n");
}