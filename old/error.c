/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:03:13 by pruenrua          #+#    #+#             */
/*   Updated: 2023/06/08 14:03:14 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	error_exit(int err, char *errstr)
{
	write(2, "Error : ", 8);
	write(2, errstr, ft_strlen(errstr));
	exit(err);
}
