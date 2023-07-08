/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:03:07 by pruenrua          #+#    #+#             */
/*   Updated: 2023/06/24 21:18:37 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

char	*av_joiner(char	**av)
{
	char	*tmp;
	char	*joined_str;
	int		i;

	i = 0;
	joined_str = ft_calloc(sizeof(char), 1);
	if (!joined_str)
		error_exit(255, "Fail to Malloc the joinstr\n");
	if (!av)
		return (0);
	while (av[++i])
	{
		if (joined_str == NULL)
		{
			if (joined_str)
				free(joined_str);
			error_exit(255, "no in put in joinedstr\n");
		}
		tmp = joined_str;
		joined_str = ft_strjoin(joined_str, av[i]);
		if (tmp)
			free(tmp);
	}
	return (joined_str);
}

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
