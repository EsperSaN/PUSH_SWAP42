/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:03:53 by pruenrua          #+#    #+#             */
/*   Updated: 2023/06/09 18:31:39 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include	<unistd.h>
# include	<stdlib.h>
# include	<stddef.h>
# include	<stdio.h>
# include	<limits.h>
#include	<stdint.h>

typedef struct t_s{
	int				value;
	int				index;
	struct	t_s		*next;
	struct	t_s		*prv;
}	t_stack;

typedef struct t_ps{
	t_stack	*a;
	t_stack	*b;
	char	*joined_av;
	int		*max_num;
	int		*min_num;
}	t_var;

void	av_checker(char	**av);
char	*av_joiner(char	**av);
void	stack_init(t_var *var);

void	error_exit(int err);

char	*ft_strjoin(char const *s1, char const *s2);

size_t	ft_strlen(const char *s);
char	**ft_split(char const *s, char c);

void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
int		ft_atoi(const char *str);
t_stack	*ft_lstnew(int value);
void	free2d(char	**str);

void	check_stack(t_var *var);
void	sorting_stack(t_var	*var);
void	*ft_calloc(size_t count, size_t size);
char	*int_to_bit(int n);

#endif