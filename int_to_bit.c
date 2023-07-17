/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_to_bit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:38:05 by pruenrua          #+#    #+#             */
/*   Updated: 2023/07/13 04:12:17 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_bzero(void *s, size_t n)
{
	while (n)
	{
		*(unsigned char *)s = 0;
		s++;
		n--;
	}
	return ;
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*malzero;
	size_t	len;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	len = size * count;
	malzero = malloc(len);
	if (malzero == NULL)
		return (NULL);
	ft_bzero(malzero, len);
	return (malzero);
}

unsigned int	plz_count(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		n = n * -1;
		len++;
	}
	while (n != 0)
	{
		n = n / 2;
		len++;
	}
	return (len);
}

void	min_int_welcome(int *n, char *a, unsigned int *len)
{
	if (*n == -2147483648)
	{
		a[*len - 1] = '8';
		*n = 214748364;
		*len = *len - 1;
	}
}
