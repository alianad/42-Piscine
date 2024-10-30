// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

// int	main(void)
// {
// 	int	nbr;
// 	int	power;

// 	nbr = 2;
// 	power = 3;
// 	printf("%d ^ %d : %d", nbr, power, ft_recursive_power(nbr, power));
// 	return (0);
// }
