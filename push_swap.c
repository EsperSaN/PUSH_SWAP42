#include "push_swap.h"

int	main(int ac, char **av)
{
	char	*joined_av;
	t_var	*stack;

	joined_av = avJoiner(av); //<< at this
	
	if (avChecker(joined_av) == -1)
		errorExit(1);
	stackInit(stack, joined_av);
	stackChecker(stack->a);
}
