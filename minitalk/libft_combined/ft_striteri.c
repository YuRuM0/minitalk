/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:57:46 by yulpark           #+#    #+#             */
/*   Updated: 2024/10/14 19:00:24 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

//void ft_test(unsigned int n, char* str)
//{
//	(void) n;
//	if (*str >= 'a' && *str <= 'z')
//		*str -= 32;
//}

//int main()
//{
//	char result[] = "hello";
//	ft_striteri(result, ft_test);
//	printf("%s", result);
//}
