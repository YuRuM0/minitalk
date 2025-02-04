/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:41:28 by yulpark           #+#    #+#             */
/*   Updated: 2025/01/18 23:09:31 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit(unsigned int n)
{
	int	digit;

	digit = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		digit ++;
	}
	return (digit);
}

static	char	*ft_un_itoa(unsigned int n)
{
	char	*result;
	int		digit;
	int		i;

	digit = ft_digit(n);
	result = malloc(sizeof(char) * (digit + 1));
	if (!result)
		return (NULL);
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

int	ft_putunsign(unsigned int c)
{
	char	*result;
	int		d;

	result = ft_un_itoa(c);
	d = ft_putstr(result);
	free (result);
	return (d);
}
