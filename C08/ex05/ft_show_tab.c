/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:36:12 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/17 15:36:12 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	long long	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}

// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }

// char	*ft_strdup(char *str)
// {
// 	int		i;
// 	char	*dest;

// 	dest = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
// 	if (dest == NULL)
// 		return (NULL);
// 	i = 0;
// 	while (str[i])
// 	{
// 		dest[i] = str[i];
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return (dest);
// }

// struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
// {
// 	int			i;
// 	t_stock_str	*str;

// 	str = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
// 	if (str == NULL)
// 		return (NULL);
// 	i = 0;
// 	while (i < ac)
// 	{
// 		str[i].size = ft_strlen(av[i]);
// 		str[i].str = av[i];
// 		str[i].copy = ft_strdup(av[i]);
// 		if (str[i].copy == NULL)
// 			return (NULL);
// 		i++;
// 	}
// 	str[i].str = 0;
// 	return (str);
// }

// int	main(int argc, char **argv)
// {
// 	int			i;
// 	t_stock_str	*stock;

// 	i = 0;
// 	stock = ft_strs_to_tab(argc, argv);
// 	if (stock == NULL)
// 		printf("Invalid");
// 	else
// 		ft_show_tab(stock);
// 	return (0);
// }
