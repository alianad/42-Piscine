// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
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
// 	str2 = "Alia 1234";
// 	printf("'%s' is alpha? %d\n", str1, ft_str_is_alpha(str1));
// 	printf("'%s' is alpha? %d\n", str2, ft_str_is_alpha(str2));
// 	return (0);
// }
