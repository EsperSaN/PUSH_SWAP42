/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:03:53 by pruenrua          #+#    #+#             */
/*   Updated: 2023/07/17 10:38:58 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include	<unistd.h>
# include	<stdlib.h>
# include	<stddef.h>
# include	<stdio.h>
# include	<limits.h>
# include	<stdint.h>

enum operation { 
	RA ,
	RB , 
	RR ,
	PA ,
	PB ,
	RRA ,
	RRB ,
	RRR ,
};

typedef struct t_s{
	int				value;
	int				index;
	int				position;
	int				target;
	int				action_a;
	int				action_b;
	int				sum_action;
	struct t_s		*next;
}	t_stack;

typedef struct t_ps{
	t_stack	*a;
	t_stack	*b;
	int		max_index;
	char	*joined_av;
	t_stack	*tmp_a;
}	t_var;

void	av_checker(char	**av);
char	*av_joiner(char	**av);
void	stack_init(t_var *var);

void	error_exit(int err, char *errstr);

char	*ft_strjoin(char const *s1, char const *s2);

size_t	ft_strlen(const char *s);
char	**ft_split(char const *s, char c);

void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
long	ft_atoi(const char *str);
t_stack	*ft_lstnew(int value);
void	free2d(char	**str);

void	check_stack(t_var var);
void	sorting_stack(t_var	var);
void	*ft_calloc(size_t count, size_t size);
char	*int_to_bit(int n);
void	free_var(t_var	*var);
t_stack	*ft_lstlast(t_stack *lst);

void	swap(t_stack **stack);
void 	push(t_stack **to, t_stack **from);
void	rev_stack(t_stack **stack);
void	re_rev_stack(t_stack **stack);
int		ft_lstlen(t_stack	*stack);

#endif