/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:23:01 by yulpark           #+#    #+#             */
/*   Updated: 2024/10/14 20:17:19 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	init_dest;
	size_t	i;

	init_dest = ft_strlen(dst);
	i = 0;
	while (init_dest >= size)
	{
		return (size + ft_strlen(src));
	}
	while (src[i] && i < (size - init_dest - 1))
	{
		dst[init_dest + i] = src[i];
		i++;
	}
	dst[init_dest + i] = '\0';
	return (init_dest + ft_strlen(src));
}

// run with -lbsd
//int main()
//{
//	char source[] = "Hello hello there";
//	char dest[] = "good morning";
//	char source1[] = "Hello hello there";
//	char dest1[] = "good morning";
//	size_t size = 4;
//	int result = ft_strlcat(dest, source, size);
//	int orig = strlcat(dest1, source1, size);
//	printf("%d\n", result);
//	printf("%d", orig);

//}
