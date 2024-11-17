/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:35:07 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/17 15:35:07 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*target;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	target = (char *)malloc((i + 1) * sizeof(char));
	if (target == NULL)
		return (NULL);
	while (src[j])
	{
		target[j] = src[j];
		j++;
	}
	target[j] = '\0';
	return (target);
}

// int	main(void)
// {
// 	char	*src;
// 	char	*target;

// 	src = "Hello World";
// 	target = ft_strdup(src);
// 	printf("%s", target);
// free(target);
// 	return (0);
// }
