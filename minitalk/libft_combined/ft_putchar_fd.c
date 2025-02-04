/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:13:34 by yulpark           #+#    #+#             */
/*   Updated: 2024/10/14 18:59:41 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

//#include <fcntl.h>
//int main()
//{
//	int fd = open("tester.txt",O_RDWR);
//	ft_putchar_fd('a', fd);
//	close(fd);
//	return(0);
//}
