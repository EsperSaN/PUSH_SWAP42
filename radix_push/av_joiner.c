/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   av_joiner.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 01:34:33 by root              #+#    #+#             */
/*   Updated: 2023/07/21 11:35:07 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*av_joiner(char	**av)
{
	char	*tmp;
	char	*joined_str;
	int		i;

	if (!av)
		return (0);
	i = 0;
	joined_str = ft_calloc(sizeof(char), 1);
	if (!joined_str)
		error_exit(255, MALLOCERROR, 0);
	while (av[++i])
	{
		if (joined_str == NULL)
		{
			if (joined_str)
				free(joined_str);
			error_exit(255, NOJOINED, 0);
		}
		tmp = joined_str;
		joined_str = ft_strjoin(joined_str, av[i]);
		if (tmp)
			free(tmp);
	}
	return (joined_str);
}
