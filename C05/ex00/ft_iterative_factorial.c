// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

// int	main(void)
// {
// 	int	nbr;

// 	nbr = 3;
// 	printf("Factorial of %d is %d", nbr, ft_iterative_factorial(nbr));
// 	return (0);
// }
