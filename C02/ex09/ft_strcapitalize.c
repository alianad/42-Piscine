// #include <stdio.h>

int	ft_str_is_alpha(char c)
{
	if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
		return (0);
	return (1);
}

int	ft_str_is_numeric(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_strlowcase(str);
	str[0] -= 32;
	while (str[i] != '\0')
	{
		if (!ft_str_is_alpha(str[i - 1]) && !ft_str_is_numeric(str[i - 1]))
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "OLA, tudo BEM? 42palavras QUARENTA-e-duas; cinquenta+E+UM";

// 	printf("Sentence : %s", ft_strcapitalize(str));
// 	return (0);
// }
