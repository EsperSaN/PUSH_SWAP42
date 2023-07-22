/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 02:58:12 by pruenrua          #+#    #+#             */
/*   Updated: 2023/07/23 03:33:01 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack	*st)
{
	int		i;
	t_stack	*tmp;

	tmp = st;
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

static int	find_min_index(t_stack *a)
{
	int	min_index;

	min_index = a->index;
	while (a != NULL)
	{
		if (a->index < min_index)
			min_index = a->index;
		a = a->next;
	}
	return (min_index);
}

void	sort_three(t_stack *a)
{
	int	pos_st;
	int	pos_nd;
	int	pos_rd;
	int	min_index;

	if (is_sorted(a))
		return ;
	pos_st = a->index;
	pos_nd = a->next->index;
	pos_rd = a->next->next->index;
	min_index = find_min_index(a);
	if (pos_st == (min_index + 0) && pos_nd > pos_rd)
		ft_putstr("ra\nsa\nrra\n");
	else if (pos_st == (min_index + 1) && pos_nd == (min_index + 0))
		ft_putstr("sa\n");
	else if (pos_st == (min_index + 2) && pos_nd == (min_index + 0))
		ft_putstr("ra\n");
	else if (pos_st == (min_index + 2) && pos_nd == (min_index + 1))
	{
		ft_putstr("sa\nrra\n");
	}
	else
		ft_putstr("rra\n");
}

static int	is_on_the_bottom(t_stack *stack, int t_index)
{
	int		size;
	int		pos;

	if (!stack)
		return (0);
	size = ft_lstlen(stack);
	pos = 1;
	while (stack != NULL)
	{
		if (stack->index == t_index)
			break ;
		pos++;
		stack = stack->next;
	}
	if (pos > size / 2)
		return (1);
	return (0);
}

void	sort_five(t_var var)
{
	int		target;

	target = 0;
	while (1)
	{
		if (is_on_the_bottom(var.a, target))
		{
			while (var.a->index != target)
				re_rev_stack(&var.a, "rra\n");
			push(&var.a, &var.b, "pb\n");
		}
		else
		{
			while (var.a->index != target)
				rev_stack(&var.a, "ra\n");
			push(&var.a, &var.b, "pb\n");
		}
		if (target == 1)
			break ;
		target = 1;
	}
	sort_three(var.a);
	ft_putstr("pa\npa\n");
}
