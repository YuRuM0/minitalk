/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:07:48 by yulpark           #+#    #+#             */
/*   Updated: 2024/10/14 20:40:07 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*psrc;
	char	*pdest;
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	psrc = (char *)src;
	pdest = (char *)dest;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}

//int main ()
//{
//	void *dest = ((void*)0);
//	void *src = ((void*)0);
//	ft_memcpy(src, dest, 3);
//	printf("%s",dest);
//	return(0);
//}
