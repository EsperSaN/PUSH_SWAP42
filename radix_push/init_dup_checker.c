/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_dup_cheker.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 01:37:22 by root              #+#    #+#             */
/*   Updated: 2023/07/17 05:31:46 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_dup(t_stack	*st)
{
	t_stack	*tmp;

	while (st != NULL)
	{
		tmp = st->next;
		while (tmp != NULL)
		{
			printf("compare [%d] with [%d]\n", st->value, tmp->value);
			if (st->value == tmp->value)
				return (1);
			tmp = tmp->next;
		}
		st = st->next;
	}
	return (0);
 }

void	stack_init(t_var *var) // dont use the ac thing !!!!
{
	char		**split_str;
	int			i;
	int			word;
	
	split_str = ft_split(var->joined_av, ' ');
	if (split_str == NULL)
		error_exit(255, "fail to split\n");
	free(var->joined_av);
	i = 0;
	word = 0;
	while (split_str[word])
		word++;
	var->b = NULL;
	var->a = NULL;
	var->max_index = word - 1;
	var->a = malloc(sizeof(t_stack) * word); // try na init the link list to the array to use both index and the next function of those thing
	while (split_str[i])
	{
		var->a[i].value = ft_atoi(split_str[i]);
		var->a[i].index = -1;
		if (i == word - 1)
			var->a[i].next = NULL;
		else
			var->a[i].next = &var->a[i + 1];
		i++;
	}
	if (is_dup(var->a))
	{
		free(var->a);
		error_exit(255, "the input must not be duplicate\n");
	}
	free2d(split_str);
	var->tmp_a = var->a;
}