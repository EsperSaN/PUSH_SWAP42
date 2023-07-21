/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 01:39:07 by root              #+#    #+#             */
/*   Updated: 2023/07/21 21:37:28 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_var	var)
{
	int		i;
	t_stack	*tmp;

	tmp = var.a;
	i = 0;
	while (tmp->next != NULL)
	{
		if (tmp->index > tmp->next->index)
			return (0);
		i++;
		tmp = tmp->next;
	}
	return (1);
}

static int	find_max_bit(int max_index)
{
	int	max_bit;
	int	loop;

	loop = 0;
	max_bit = 0;

	while (max_index != 0)
	{
		max_bit++;
		loop++;
		if (max_index >> loop == 0)
			break ;
	}
	return (max_bit);
}

void	radixs(t_var var)
{
	int	loop;
	int	max_loop;
	int	i;

	loop = 0;
	if (is_sorted(var))
		return ;
	max_loop = find_max_bit(var.max_index);
	while (!is_sorted(var) && loop <= max_loop)
	{
		i = 0;
		while (i <= var.max_index)
		{
			if (((var.a->index >> loop) & 1) == 1)
				rev_stack(&var.a, "ra\n");
			else if (((var.a->index >> loop) & 1) == 0)
				push(&var.a, &var.b, "pb\n");
			i++;
		}
		while (var.b != NULL)
			push(&var.b, &var.a, "pa\n");
		loop++;
	}
}

void	sort(int mode, t_var var)
{
	if (mode == 2)
	{
		if (!is_sorted(var))
			swap(&var.a);
	}
	if (mode == 3)
	{
	}
	else if (mode == 5)
	{
	}
}

void	sorting_stack(t_var	var)
{
	//if (var.max_index == 1)
	//	sort(2, var);
	//else if (var.max_index == 2)
	//	sort(3, var);
	//else if (var.max_index == 4)
	//	sort(5, var);
	//else
		radixs(var);
}


