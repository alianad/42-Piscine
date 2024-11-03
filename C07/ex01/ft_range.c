// #include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;

	i = 0;
	if (min >= max)
		return (NULL);
	ptr = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}

// int	main(void)
// {
// 	int	i;
// 	int	min;
// 	int	max;
// 	int	*ptr;

// 	i = 0;
// 	min = 1;
// 	max = 11;
// 	ptr = ft_range(min, max);
// 	if (ptr == NULL)
// 		printf("Invalid range");
// 	else
// 	{
// 		while (i < max - min)
// 		{
// 			printf("%d ", ptr[i]);
// 			i++;
// 		}
// 	}
// 	free(ptr);
// 	return (0);
// }
