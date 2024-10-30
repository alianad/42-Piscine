// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

// int	main(void)
// {
// 	int	nbr;

// 	nbr = 3;
// 	printf("Factorial of %d is %d", nbr, ft_recursive_factorial(nbr));
// 	return (0);
// }
