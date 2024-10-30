// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

// int	main(void)
// {
// 	int	nbr;

// 	nbr = 39;
// 	printf("Next prime number of %d is %d", nbr, ft_find_next_prime(nbr));
// 	return (0);
// }
