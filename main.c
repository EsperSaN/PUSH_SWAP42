#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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
	int	value;
	int index;
	struct t_s *next;
} t_stack;


int	find_max_bit(int max_index)
{
	int max_bit = 0;
	int	loop = 0;
	printf("input is [%d]\n", max_index);

	while (max_index != 0)
	{
		max_bit++;
		loop++;
		if (max_index >> loop == 0)
			break;
	}
	printf("maxbit is [%d]", max_bit);
	return (max_bit);
}

int main(int ac, char **av)
{
	find_max_bit(atoi(av[1]));
}