/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 01:39:07 by root              #+#    #+#             */
/*   Updated: 2023/07/17 10:49:39 by root             ###   ########.fr       */
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

static int	find_max_bit(int max_index)
{
	int max_bit = 0;
	int	loop = 0;
	printf("input is [%d]\n", max_index);

	while (max_index != 0)
	{
		max_bit++;
		loop++;
		if (max_index >> loop == 0)
			break;
	}
	printf("maxbit is [%d]", max_bit);
	return (max_bit);
}

void	radixs(t_var var)
{
	int loop = 0;
	if (is_sorted(var))
		return ((void)write(1, "sorted in radix thx\n", 20));
	int max_loop = find_max_bit(var.max_index);
	while (loop <= max_loop)
	{
		printf("\nloop [%d]\n", loop);
		int i = 0;
		while (i < var.max_index)
		{
			if( ((var.a->index >> loop) % 2) == 0)
				push(&var.a, &var.b);
			else
				rev_stack(&var.a);
			//printf("in sheft [%d] value is [%d]", loop ,value);
			
			i++;
		}
		while(var.b != NULL)
			push(&var.b, &var.a);
		check_stack(var);
		loop++;
	}

}
void	sorting_stack(t_var	var)
{
	printf("in the sort stack \n");
	radixs(var);
}