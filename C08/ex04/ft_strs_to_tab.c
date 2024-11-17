/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:36:06 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/17 15:36:06 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dest;

	dest = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*str;

	str = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		str[i].size = ft_strlen(av[i]);
		str[i].str = av[i];
		str[i].copy = ft_strdup(av[i]);
		if (str[i].copy == NULL)
			return (NULL);
		i++;
	}
	str[i].str = 0;
	return (str);
}

// int	main(int argc, char **argv)
// {
// 	int			i;
// 	t_stock_str	*stock;

// 	i = 0;
// 	stock = ft_strs_to_tab(argc, argv);
// 	if (stock == NULL)
// 		printf("Invalid");
// 	else
// 	{
// 		while (stock[i].str != NULL)
// 		{
// 			printf("\nSize : %d\n", stock[i].size);
// 			printf("Str : %s\n", stock[i].str);
// 			printf("Copy : %s\n", stock[i].copy);
// 			i++;
// 		}
// 		free(stock);
// 	}
// 	return (0);
// }
