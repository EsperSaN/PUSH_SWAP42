#include	"push_swap.h"

void	errorExit(int	err)
{
	write(2, "Error\n", 6);
	exit(err);
}