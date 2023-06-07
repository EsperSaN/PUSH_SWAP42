#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include	<unistd.h>
# include	<stdlib.h>

typedef struct t_s{
	int	value;
	t_stack	*next;
}	t_stack;

typedef struct t_ps{
	t_stack	*a;
	t_stack	*b;
} t_var;

int		avChecker(char	*av);
char	*avJoiner(char	**av);

void	errorExit(int	err);

char	*ft_strjoin(char const *s1, char const *s2);

size_t	ft_strlen(const char *s);

#endif