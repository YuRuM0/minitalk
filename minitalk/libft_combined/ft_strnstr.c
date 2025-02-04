/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:42:34 by yulpark           #+#    #+#             */
/*   Updated: 2024/10/26 18:55:34 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*result;

	result = NULL;
	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)&big[0]);
	if (len > ft_strlen(big))
		len = ft_strlen(big);
	while (i < len && big)
	{
		j = 0;
		while (little && (i + j) < len && big[i + j] == (char)little[j])
			j++;
		if (little[j] == '\0')
		{
			result = (char *)&big[i];
			return (result);
		}
		i++;
	}
	return (result);
}
//#include <string.h>
//int main()
//{
//	const char* big = "";
//	const char *little = "";
//	printf("%s",ft_strnstr("fake",  ((void*)0), 3));
//}
