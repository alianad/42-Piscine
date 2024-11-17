/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:35:18 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/17 15:35:18 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int *)malloc((max - min) * sizeof(int));
	if (!array)
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (i);
}

// int	main(void)
// {
// 	int	i;
// 	int	min;
// 	int	max;
// 	int	size;
// 	int	*range;

// 	i = 0;
// 	min = 1;
// 	max = 11;
// 	size = ft_ultimate_range(&range, min, max);
// 	if (size == -1)
// 		printf("Memory allocation failed");
// 	else if (size == 0)
// 		printf("Invalid range");
// 	else
// 	{
// 		printf("Size of array : %d\n", size);
// 		while (i < size)
// 		{
// 			printf("%d ", range[i]);
// 			i++;
// 		}
// 	}
// 	free(range);
// 	return (0);
// }
