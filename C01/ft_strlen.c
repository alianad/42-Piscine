#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len])
		len++;
	return (len);
}

int	main(void)
{
	char	*str;
	int		result;

	str = "Hello World!";
	result = ft_strlen(str);

	printf("%d", result);
	return (0);
}
