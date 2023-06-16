/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:41:45 by pruenrua          #+#    #+#             */
/*   Updated: 2023/06/08 15:47:20 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free2d(char	**str)
{
	int		i;

	i = -1;
	while (str[++i])
	{
		if (str[i])
		{
			free(str[i]);
			str[i] = NULL;
		}
	}
	if (str)
	{
		free(str);
		str = NULL;
	}
	str = NULL;
}
