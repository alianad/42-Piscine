// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;

// 	str1 = "Alia";
// 	str2 = "ALIA";
// 	printf("%s is uppercase? %d\n", str1, ft_str_is_uppercase(str1));
// 	printf("%s is uppercase? %d\n", str2, ft_str_is_uppercase(str2));
// 	return (0);
// }