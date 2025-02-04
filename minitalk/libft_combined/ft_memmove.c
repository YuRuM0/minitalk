/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:15:40 by yulpark           #+#    #+#             */
/*   Updated: 2024/10/26 20:13:20 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*psrc;
	char		*pdest;
	size_t		i;

	if (!dest && !src)
		return (0);
	psrc = (char *)src;
	pdest = (char *)dest;
	i = 0;
	if (psrc > pdest)
	{
		while (i < n)
		{
			pdest[i] = psrc[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			pdest[n] = psrc[n];
	}
	return (dest);
}

//int		main(int argc, const char *argv[])
//{
//	int size = 128 * 1024 * 1024;
//	char *dst = (char *)malloc(sizeof(char) * size);
//	char *data = (char *)malloc(sizeof(char) * size);

//	ft_memset(data, 'A', size);
//	ft_memmove(dst, data, size);
//	printf("%s\n", dst);
//}
