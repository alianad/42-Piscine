// #include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin_all(int size, char **strs, char *sep, char *ptr)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			ptr[k++] = strs[i][j++];
		if (i + 1 < size)
		{
			j = 0;
			while (sep[j])
				ptr[k++] = sep[j++];
		}
		i++;
	}
	ptr[k] = '\0';
	return (ptr);
}

int	ft_strlen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	sum;
	int	sep_size;

	i = 0;
	sum = 0;
	sep_size = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j++])
			sum++;
		i++;
	}
	i = 0;
	while (sep[i++])
		sep_size++;
	return (sum + (size - 1) * sep_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;

	if (size <= 0)
	{
		ptr = (char *)malloc(1);
		ptr[0] = '\0';
		return (ptr);
	}
	ptr = (char *)malloc((ft_strlen(size, strs, sep) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	return (ft_strjoin_all(size, strs, sep, ptr));
}

// int	main(void)
// {
// 	char	*strs[] = {"Hello", "Good", "Morning!"};
// 	char	*sep = " - ";
// 	char	*ptr;
// 	int		size = 3;

// 	ptr = ft_strjoin(size, strs, sep);
// 	if (ptr)
// 		printf("%s", ptr);
// 	else
// 		printf("Invalid");
// 	free(ptr);
// 	return (0);
// }
