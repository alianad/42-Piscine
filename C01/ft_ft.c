#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	a;
	int	*nbr;

	a = 43;
	nbr = &a;

	ft_ft(nbr);
	printf("%d", *nbr);
	return (0);
}