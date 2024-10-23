// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	*str;
// 	int		length;

// 	str = "Hello World!";
// 	length = ft_strlen(str);
// 	printf("Length : %d", length);
// 	return (0);
// }
