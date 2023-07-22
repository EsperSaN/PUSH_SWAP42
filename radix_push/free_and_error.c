/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_and_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 05:29:33 by root              #+#    #+#             */
/*   Updated: 2023/07/23 03:03:01 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free2d(char	**str)
{
	int		i;

	i = -1;
	if (!str)
		return ;
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

void	error_exit(int err, char *errstr, char **twoD)
{
	free2d(twoD);
	write(2, errstr, ft_strlen(errstr));
	exit(err);
}

void	free_var(t_var	*var)
{
	int	i;

	i = 0;
	if (var->a)
	{
		while (var->a[i].next)
		{
			var->a[i].next = NULL;
			i++;
		}
	}
	free(var->a);
}
