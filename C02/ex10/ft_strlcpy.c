// #include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}

// int	main(void)
// {
// 	char	src[] = "letters";
// 	char	dest[11];

// 	printf("src: %s\n", src);
// 	printf("lenght returned: %d\n", ft_strlcpy(dest, src, 6));
// 	printf("dest: %s\n", dest);
// 	return (0);
// }
