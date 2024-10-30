// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

// int	main(void)
// {
// 	int	nbr;
// 	int	power;

// 	nbr = 10;
// 	power = 2;
// 	printf("%d ^ %d : %d", nbr, power, ft_iterative_power(nbr, power));
// 	return (0);
// }
