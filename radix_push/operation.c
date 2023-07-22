/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 05:24:07 by root              #+#    #+#             */
/*   Updated: 2023/07/23 01:54:49 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **from, t_stack **to, char *str)
{
	t_stack	*tmp;

	if (*from == NULL)
		return ;
	if (*to == NULL)
	{
		tmp = (*from)->next;
		*to = *from;
		(*to)->next = NULL;
		*from = tmp; 
	}
	else
	{
		tmp = (*from)->next;
		(*from)->next = *to;
		*to = *from;
		*from = tmp;
	}
	ft_putstr(str);
}

void	swap(t_stack **stack, char *str)
{
	t_stack	*tmp_top;
	t_stack	*tmp_sec;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	tmp_top = *stack;
	tmp_sec = (*stack)->next;
	tmp_top->next = tmp_sec->next;
	tmp_sec->next = *stack;
	*stack = tmp_sec;
	ft_putstr(str);
}

void	re_rev_stack(t_stack **stack, char *str)
{
	t_stack	*last;
	t_stack	*semi_last;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	if (ft_lstlen(*stack) == 2)
		return (swap(stack, NULL));
	semi_last = *stack;
	last = ft_lstlast(*stack);
	while (semi_last->next->next != NULL)
		semi_last = semi_last->next;
	last->next = *stack;
	semi_last->next = NULL;
	*stack = last;
	ft_putstr(str);
}

void	rev_stack(t_stack **stack, char *str)
{
	t_stack	*next_top;
	t_stack	*last;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	last = ft_lstlast(*stack);
	next_top = (*stack)->next;
	last->next = *stack;
	(*stack)->next = NULL;
	*stack = next_top;
	ft_putstr(str);
}
