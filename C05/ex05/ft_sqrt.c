// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

// int	main(void)
// {
// 	int	nbr;

// 	nbr = 3;
// 	printf("Square root of %d is %d", nbr, ft_sqrt(nbr));
// 	return (0);
// }
