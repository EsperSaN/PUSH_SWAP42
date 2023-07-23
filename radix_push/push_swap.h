/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 05:33:00 by root              #+#    #+#             */
/*   Updated: 2023/07/23 22:16:15 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>

# define NULLEXIT "Error\n"
# define NUMOPEXIT "Error\n"
# define EXOPEXIT "Error\n"
# define OVERFLOW "Error\n"
# define DUPEXIT "Error\n"
# define SPLITERROR "Error\n"
# define MALLOCERROR "Error\n"
# define NOJOINED "Error\n"

typedef struct t_s{
	int				value;
	int				index;
	struct t_s		*next;
}	t_stack;

typedef struct t_ps{
	t_stack	*a;
	t_stack	*b;
	char	*joined_av;
	int		max_index;
	t_stack	*tmp_a;
}	t_var;

/* arg_check_util.c */
int		is_all_space(char	*str);
int		count_op(char	*str);
int		is_allow(char c);
int		is_space(char c);
int		is_num(char c);

/* argument_check.c */
void	av_checker(char	**av);
void	argv_checker(char	**av);

/* av_joiner.c */
char	*av_joiner(char	**av);

/* init_dup_checker.c */
void	stack_init(t_var *var);

/* operation.c */
void	rev_stack(t_stack **stack, char *str);
void	re_rev_stack(t_stack **stack, char *str);
void	swap(t_stack **stack, char *str);
void	push(t_stack **from, t_stack **to, char *str);

/* pre_sort.c */
void	pre_sort_index(t_var	*var);

/* radix.c */
void	sorting_stack(t_var	var);
void	radixs(t_var var);
int		is_sorted(t_stack *stack);

/* sort.c */
void	sort_three(t_stack *a);
void	sort_five(t_var var);
void	sort_four(t_var var);

/* util.c */
size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_putstr(char *str);

/* util2_lst.c */
t_stack	*ft_lstlast(t_stack *lst);
t_stack	*ft_lstnew(int value);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
int		ft_lstlen(t_stack	*stack);

/* util3_split.c */
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);

/* util4_atoi.c */
long	ft_atoi(const char *str);

/* free_and_error.c */
void	error_exit(int err, char *errstr, char **twoD);
void	free_var(t_var	*var);
void	free2d(char	**str);

#endif