#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	main(void)
{
	int	a;
	int	b;
	int	*ptr_a;
	int	*ptr_b;

	a = 1;
	b = 0;

	ptr_a = &a;
	ptr_b = &b;

	ft_swap(ptr_a, ptr_b);

	printf("a : %d\n", a);
	printf("b : %d", b);

	return (0);
}
