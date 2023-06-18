/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:03:07 by pruenrua          #+#    #+#             */
/*   Updated: 2023/06/09 18:37:30 by pruenrua         ###   ########.fr       */
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

// int	is_dup(t_stack	*st)
// {
// 	t_stack	*tmp;

// 	while (st != NULL)
// 	{
// 		tmp = st->next;
// 		while (tmp != NULL)
// 		{
// 			if (st->value == tmp->value)
// 				return (1);
// 			tmp = tmp->next;
// 		}
// 		st = st->next;
// 	}
// 	return (0);
// }

void	stack_init(t_var *var)
{
	char	**split_str;
	int		i;

	split_str = ft_split(var->joined_av, ' ');
	if (split_str == NULL)
		error_exit(255, "fail to split\n");
	free(var->joined_av);
	i = 0;
	/*while (split_str[++i])
		printf("split [%d] = %s\n", i, split_str[i]);
	i = -1;*/
	var->b = NULL;
	var->a = NULL;
	while (split_str[i])
	{
		printf("init the [%s]\n", split_str[i]);
		ft_lstadd_front(&var->a, ft_lstnew(ft_atoi(split_str[i])));
		i++;
	}
	// if(is_dup(var->a))
	// {
	// 	t_stack *tmp;

	// 	while (var->a)
	// 	{
	// 		tmp = var->a;
	// 		var->a = var->a->next;
	// 		free(tmp);
	// 	}
	// 	var->a = NULL;
	// 	error_exit(255, "the input must not be duplicate\n");
	// }
	free2d(split_str);
	check_stack(var);
}
