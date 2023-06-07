#include	"push_swap.h"

char	*avJoiner(char	**av)
{
	char	*joinedStr;
	int		i;

	i = 0;
	joinedStr = 0;

	if (!av)
		return(0);
	while(av[++i])
	{
		joinedStr = ft_strjoin(joinedStr, av[i]);
		if (joinedStr == NULL)
			errorExit(1);
	}
	return(joinedStr);
}