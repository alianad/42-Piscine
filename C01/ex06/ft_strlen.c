/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:29:56 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/17 15:29:56 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	*str;
// 	int		length;

// 	str = "Hello World!";
// 	length = ft_strlen(str);
// 	printf("Length : %d", length);
// 	return (0);
// }
