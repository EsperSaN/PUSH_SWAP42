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



int main()
{
	int i = 0;
	
	while (i <= RRR)
	{
		printf("%d , ", i);
		i++;
	}
}