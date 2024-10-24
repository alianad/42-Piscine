// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;

// 	str1 = "1234";
// 	str2 = "Alia";
// 	printf("'%s' is numeric? %d\n", str1, ft_str_is_numeric(str1));
// 	printf("'%s' is numeric? %d\n", str2, ft_str_is_numeric(str2));
// 	return (0);
// }
