/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:09:31 by yulpark           #+#    #+#             */
/*   Updated: 2024/10/14 19:04:18 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
//int main()
//{
//    int c = 0x6A;
//    if (ft_isascii(c))
//    {
//        printf("Ascii!");
//	}
//    else
//    {
//        printf("No ascii!");
//    }
//}
