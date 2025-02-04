/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:08:54 by yulpark           #+#    #+#             */
/*   Updated: 2025/01/18 22:35:16 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_typechecker(va_list args, const char *string)
{
	int	total_len;

	total_len = 0;
	if (*string == 'c')
		total_len += ft_putchar(va_arg(args, int));
	else if (*string == 's')
		total_len += ft_putstr(va_arg(args, char *));
	else if (*string == 'p')
		total_len += ft_puthex(va_arg(args, unsigned long));
	else if (*string == 'd' || *string == 'i')
		total_len += ft_putnbr(va_arg(args, int));
	else if (*string == 'u')
		total_len += ft_putunsign(va_arg(args, unsigned int));
	else if (*string == 'x' || *string == 'X')
		total_len += ft_xxputhex(va_arg(args, int), *string);
	else if (*string == '%')
		total_len += ft_putchar('%');
	return (total_len);
}

int	ft_printf(const char *start, ...)
{
	va_list	args;
	int		total_len;

	total_len = 0;
	va_start(args, start);
	while (*start)
	{
		if (*start == '%')
		{
			start++;
			total_len += ft_typechecker(args, start);
		}
		else
			total_len += ft_putchar(*start);
		start++;
	}
	va_end(args);
	return (total_len);
}

//int main()
//{
//	char *d = "";
//	int z = 63;
//	int c = ft_printf(" %p ", NULL);
//	//printf("\n%d\n",c);
//	printf(" %p ", NULL);
//}
