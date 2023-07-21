/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_and_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 05:29:33 by root              #+#    #+#             */
/*   Updated: 2023/07/21 21:28:44 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_stack(t_var var)
{
	printf("------------------------------------------------\n");
	printf("[A] =");
	while (var.a)
	{
		printf(" [%d (%d)] ", var.a->value, var.a->index);
		var.a = var.a->next;
	}
	printf("\n[B] =");
	while (var.b)
	{
		printf(" [%d] ", var.b->value);
		var.b = var.b->next;
	}
	printf("\n");
}

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
	//write(2, "Error ", 8);
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
