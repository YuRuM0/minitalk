/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:29:58 by yulpark           #+#    #+#             */
/*   Updated: 2024/10/16 13:11:59 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *) &p[i]);
		i++;
	}
	return (NULL);
}

//int main ()
//{
//   const char str[] = "Tutorialspoint";
//   const char ch = '.';
//   char *ret;
//   ft_memchr('\005', 15);
//   printf("String after |%c| is - |%s|\n", ch, ret);
//   return(0);
//}
