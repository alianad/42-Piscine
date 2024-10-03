#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;

	*a = div / mod;
	*b = div % mod;
}

int	main(void)
{
	int	a;
	int	b;
	
	a = 5;
	b = 2;

	printf("a : %d\nb : %d\n\n", a, b);

	ft_ultimate_div_mod(&a, &b);

	printf("a : %d\nb : %d", a, b);
	return (0);
}
