// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
				ft_swap(&tab[j], &tab[i]);
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	int	array[] = {5, 3, 2, 9, 4, 8, 0, 7, 1, 6};
// 	int	size;
// 	int	i;

// 	size = 10;
// 	i = 0;
// 	ft_sort_int_tab(array, size);
// 	while (i < size)
// 	{
// 		printf("%d ", array[i]);
// 		i++;
// 	}
// 	return (0);
// }
