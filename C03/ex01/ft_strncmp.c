// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char			*s1;
// 	char			*s2;
// 	unsigned int	n;

// 	s1 = "Hello";
// 	s2 = "HeLlo";
// 	n = 5;
// 	printf("%d", ft_strncmp(s1, s2, n));
// 	return (0);
// }
