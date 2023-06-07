#include	"push_swap.h"

int	is_num(char c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

int	is_space(char c)
{
	if (c == 32 || c == 10)
		return (1);
	return (0);
}

int	is_allow(char c)
{
	if (!is_num(c) && c != '-' && c != '+' && !is_space(c))
		return (0);
	else
		return (1);
}

char	*avJoiner(char	**av)
{
	char	*joinedStr;
	int		i;

	i = 0;
	joinedStr = malloc(sizeof(char) * 1);
	if (!joinedStr)
		errorExit(1);
	joinedStr[0] = 0;
	if (!av)
		return (0);
	while (av[++i])
	{
		if (joinedStr == NULL)
		{
			if (joinedStr)
				free(joinedStr);
			errorExit(1);
		}
		joinedStr = ft_strjoin(joinedStr, av[i]);
	}
	return (joinedStr);
}

void	avChecker(char	**av)
{
	int	i;
	int	j;

	if (!av)
		return ;
	j = 0;
	i = 0;
	while (av[++i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == '-' || av[i][j] == '+')
			{
				if (!is_num(av[i][j + 1]))
					errorExit(1);
			}
			if (!is_allow(av[i][j]))
				errorExit(1);
			j++;
		}
	}
}
