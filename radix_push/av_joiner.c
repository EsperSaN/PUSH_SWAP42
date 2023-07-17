/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   av_joiner.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 01:34:33 by root              #+#    #+#             */
/*   Updated: 2023/07/17 05:25:45 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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