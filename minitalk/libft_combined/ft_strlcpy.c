/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:21:28 by yulpark           #+#    #+#             */
/*   Updated: 2024/10/17 16:38:53 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size == 1)
		dst[0] = '\0';
	while (size > 1 && (src[i] != '\0' && i < size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

//int main() {
//    char src[] = "Hello, World!";

//    // Test case to highlight the error
//    char short_dst[5];
//	char short_dst2[5];
//    size_t short_result = ft_strlcpy(short_dst, src, sizeof(short_dst));
//	//size_t short_result2 = strlcpy(short_dst2, src,sizeof(short_dst2));
//    return 0;
//}
