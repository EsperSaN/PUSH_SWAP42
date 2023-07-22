/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util4_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 05:28:42 by root              #+#    #+#             */
/*   Updated: 2023/07/23 03:19:52 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	overflow_welcome(int lob)
{
	if (lob == -1)
		lob = 0;
	if (lob == 1)
		lob = -1;
	return (lob);
}

long	ft_atoi(const char *str)
{
	int				len;
	int				lob;
	unsigned long	result;

	len = 0;
	result = 0;
	lob = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v'\
				|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			lob = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
		len++;
	}
	if (len > 19 || result > 9223372036854775807)
		return (overflow_welcome(lob));
	return ((result * lob));
}
