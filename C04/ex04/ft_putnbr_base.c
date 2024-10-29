// #include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			i;
	int			size;
	char		array[32];
	long long	n;

	i = 0;
	n = nbr;
	size = ft_strlen(base);
	if (!ft_check_base(base))
		return ;
	if (n == 0)
		ft_putchar(base[0]);
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	while (n > 0)
	{
		array[i] = base[n % size];
		n = n / size;
		i++;
	}
	while (i > 0)
		ft_putchar(array[--i]);
}

// int	main(void)
// {
// 	int		nbr;
// 	char	*dec;
// 	char	*hex;
// 	char	*oct;
// 	char	*bin;

// 	nbr = 0;
// 	dec = "0123456789";
// 	hex = "0123456789abcdef";
// 	oct = "01234567";
// 	bin = "01";
// 	printf("Decimal to decimal : ");
// 	ft_putnbr_base(nbr, dec);
// 	printf("\nDecimal to hexadecimal : ");
// 	ft_putnbr_base(nbr, hex);
// 	printf("\nDecimal to octal : ");
// 	ft_putnbr_base(nbr, oct);
// 	printf("\nDecimal to binary : ");
// 	ft_putnbr_base(nbr, bin);
// 	return (0);
// }
