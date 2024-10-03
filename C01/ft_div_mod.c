#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 45;
	b = 5;

	printf("a : %d\nb : %d\n\n", a, b);

	ft_div_mod(a, b, &div, &mod);

	printf("a : %d\nb : %d\nmod : %d\ndiv : %d", a, b, div, mod);
	return (0);
}
