// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;

// 	str1 = "aB3/!'.;Ko+";
// 	str2 = "aB3/!'.;Ko±";
// 	printf("%s is printable? %d\n", str1, ft_str_is_printable(str1));
// 	printf("%s is printable? %d\n", str2, ft_str_is_printable(str2));
// 	return (0);
// }
