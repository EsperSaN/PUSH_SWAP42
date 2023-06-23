/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:03:07 by pruenrua          #+#    #+#             */
/*   Updated: 2023/06/23 14:58:38 by pruenrua         ###   ########.fr       */
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
//	t_stack	*tmp;

//	while (st != NULL)
//	{
//		tmp = st->next;
//		while (tmp != NULL)
//		{
//			if (st->value == tmp->value)
//				return (1);
//			tmp = tmp->next;
//		}
//		st = st->next;
//	}
//	return (0);
	int	i;
	int j;
	
	i = 0;
	
	while (st[i].value)
	{
		printf("\\\\ read [%d]\\\\ \n", i);
		j = i + 1;
		while (st[j].value)
		{
			printf("read [%d]\n", i);
			if (st[i].value == st[j].value)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
		
}

void	stack_init(t_var *var, int ac)
{
	char		**split_str;
	int			i;
	t_stack		*tmp;
	
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
	
	var->a = malloc(sizeof(t_stack) * (ac - 1));
	tmp = var->a;
	while (split_str[i])
	{
		var->a[i].value = ft_atoi(split_str[i]);
		var->a[i].index = -1;
		var->a[i].next = &var->a[i + 1];
		i++;
	}
	if (is_dup(var->a))
	{
		free(var->a);
		error_exit(255, "the input must not be duplicate\n");
	}
	//while (split_str[i])
	//{
	//	printf("init the [%s]\n", split_str[i]);
	//	ft_lstadd_back(&var->a, ft_lstnew(ft_atoi(split_str[i]))); //<< The first argument should be at the top of the stack (be careful about the order).
	//	i++;
	//}
	//if (is_dup(var->a))
	//{
	//	while (var->a)
	//	{
	//		tmp = var->a;
	//		var->a = var->a->next;
	//		free(tmp);
	//	}
	//	var->a = NULL;
	//	error_exit(255, "the input must not be duplicate\n");
	//}
	free2d(split_str);
	check_stack(var);
}
