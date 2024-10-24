// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;

// 	str1 = "alia";
// 	str2 = "Alia";
// 	printf("%s is lowercase? %d\n", str1, ft_str_is_lowercase(str1));
// 	printf("%s is lowercase? %d\n", str2, ft_str_is_lowercase(str2));
// 	return (0);
// }
