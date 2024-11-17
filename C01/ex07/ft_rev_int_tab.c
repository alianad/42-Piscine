/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:30:03 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/17 15:30:03 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i <= size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

// int	main(void)
// {
// 	int	array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
// 	int	size;
// 	int	i;

// 	size = 10;
// 	i = 0;
// 	ft_rev_int_tab(array, size);
// 	while (i < size)
// 	{
// 		printf("%d ", array[i]);
// 		i++;
// 	}
// 	return (0);
// }
