/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadhira <anadhira@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:32:29 by anadhira          #+#    #+#             */
/*   Updated: 2024/11/17 15:32:29 by anadhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	j = dest_len;
	if (size <= dest_len)
		return (src_len + size);
	while (src[i] != '\0' && i < (size - dest_len - 1))
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (src_len + dest_len);
}

// int	main(void)
// {
// 	char	dest[] = "dest";
// 	char	src[] = "src";
// 	int		size;

// 	size = 7;
// 	printf("Dest Before: %s\n", dest);
// 	printf("Return of strlcat: %d\n", ft_strlcat(dest, src, size));
// 	printf("Dest after: %s\n", dest);
// }
