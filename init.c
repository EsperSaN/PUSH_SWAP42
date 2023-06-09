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
		error_exit(255);
	if (!av)
		return (0);
	while (av[++i])
	{
		if (joined_str == NULL)
		{
			if (joined_str)
				free(joined_str);
			error_exit(255);
		}
		tmp = joined_str;
		joined_str = ft_strjoin(joined_str, av[i]);
		if (tmp)
			free(tmp);
	}
	return (joined_str);
}

void	stack_init(t_var *var)
{
	char	**split_str;
	int		i;

	split_str = ft_split(var->joined_av, ' ');
	if (!split_str)
		error_exit(255);
	free(var->joined_av);
	i = -1;
	/*while (split_str[++i])
		printf("split [%d] = %s\n", i, split_str[i]);
	i = -1;*/

	while (split_str[++i])
		ft_lstadd_front(&var->a, ft_lstnew(ft_atoi(split_str[i])));
	set_the_bitstr(&var);
	free2d(split_str);

	check_stack(var);
	
}
