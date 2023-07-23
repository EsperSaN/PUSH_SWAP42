/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_dup_checker.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 01:37:22 by root              #+#    #+#             */
/*   Updated: 2023/07/23 19:59:38 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_dup(t_stack	*st)
{
	t_stack	*tmp;

	while (st != NULL)
	{
		tmp = st->next;
		while (tmp != NULL)
		{
			if (st->value == tmp->value)
				return (1);
			tmp = tmp->next;
		}
		st = st->next;
	}
	return (0);
}

char	**split_and_check(t_var	*var, int *word)
{
	char	**split_str;

	split_str = ft_split(var->joined_av, ' ');
	if (split_str == NULL)
		error_exit(255, SPLITERROR, split_str);
	free(var->joined_av);
	var->b = NULL;
	var->a = NULL;
	*word = 0;
	while (split_str[*word])
		(*word)++;
	var->max_index = (*word) - 1;
	return (split_str);
}

void	put_value_in(t_var	*var, char **split_str)
{
	int		i;

	i = 0;
	if (!var || !split_str)
		return ;
	while (split_str[i])
	{
		var->a[i].value = ft_atoi(split_str[i]);
		var->a[i].index = -1;
		if (i == var->max_index)
			var->a[i].next = NULL;
		else
			var->a[i].next = &var->a[i + 1];
		i++;
	}
}

void	stack_init(t_var *var)
{
	char		**split_str;
	int			word;

	split_str = split_and_check(var, &word);
	av_checker(split_str);
	var->a = calloc(sizeof(t_stack), word);
	if (var->a == NULL)
		error_exit(255, MALLOCERROR, 0);
	put_value_in(var, split_str);
	free2d(split_str);
	if (is_dup(var->a))
	{
		free(var->a);
		error_exit(255, DUPEXIT, 0);
	}
	var->tmp_a = var->a;
}
