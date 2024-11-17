/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:29:31 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/17 15:29:31 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 0;
// 	b = 1;
// 	ft_swap(&a, &b);
// 	printf("a : %d\n", a);
// 	printf("b : %d\n", b);
// 	return (0);
// }
