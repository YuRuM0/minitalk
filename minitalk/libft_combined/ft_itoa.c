/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 22:30:07 by yulpark           #+#    #+#             */
/*   Updated: 2024/10/26 19:25:44 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit(int n)
{
	int	digit;

	digit = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		digit++;
	while (n != 0)
	{
		n = n / 10;
		digit ++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		digit;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	digit = ft_digit(n);
	result = malloc(sizeof(char) * (digit + 1));
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	if (n == 0)
		result[0] = '0';
	i = digit - 1;
	while (n > 0)
	{
		result[i--] = (n % 10) + '0';
		n = n / 10;
	}
	result[digit] = '\0';
	return (result);
}

//int main()
//{
//	char* res = ft_itoa(-2147483648);
//	printf("%s", res);
//}
