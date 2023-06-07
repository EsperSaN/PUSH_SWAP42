#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include	<unistd.h>
# include	<stdlib.h>
# include	<stddef.h>
# include	<stdio.h>

typedef struct t_s{
	int				value;
	struct t_stack	*next;
}	t_stack;

typedef struct t_ps{
	t_stack	*a;
	t_stack	*b;
}	t_var;

void	avChecker(char	**av);
char	*avJoiner(char	**av);

void	errorExit(int	err);

char	*ft_strjoin(char const *s1, char const *s2);

size_t	ft_strlen(const char *s);

#endif