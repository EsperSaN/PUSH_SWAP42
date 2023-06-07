#include "push_swap.h"

int	main(int ac, char **av)
{
	char	*joined_av;
	
	(void) ac;
	avChecker(av);

	joined_av = avJoiner(av); //<< at this
	
	printf("input = [%s]\n",joined_av);

	stackInit(stack, joined_av);
	stackChecker(stack->a);
}
