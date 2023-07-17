#include "push_swap.h"
int	check_input()
{
	char	*buff;

	while(1)
	{
		buff = get_next_line(0);
		if(buff == NULL)
			brake;
		else 
			eiei()
	}
}

void	eiei(t_var var)
{
	if(op = "PA")
		push(&var.b , &var.a);
	else if(op = "PB")
		push(&var.a, &var.b);
	else if (op = "RA")
		rev_stack(&var.a);
	else if (op = "RB")
		rev_stack(&var.b);
	else if (op = "RRA")
		re_rev_stack(&var.a);
	else if (op = "RRB")
		re_rev_stack(&var.b);
	else if (op = "RR")
	{
		rev_stack(&var.a);
		rev_stack(&var.b);
	}
	else if (op = RRR)
	{
		re_rev_stack(&var.a);
		re_rev_stack(&var.b);
	}
	check_stack(var);
}