/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:15:53 by yulpark           #+#    #+#             */
/*   Updated: 2024/10/14 20:21:46 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
//int main()
//{
//	int c = 41;
//	if (ft_isprint(c))
//	{
//		printf("Printable!");
//	}
//	else
//	{
//		printf("No print!");
//	}
//}
