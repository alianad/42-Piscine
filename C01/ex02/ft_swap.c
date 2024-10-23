// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 0;
// 	b = 1;
// 	ft_swap(&a, &b);
// 	printf("a : %d\n", a);
// 	printf("b : %d\n", b);
// 	return (0);
// }
