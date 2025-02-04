/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:39:55 by yulpark           #+#    #+#             */
/*   Updated: 2024/10/14 18:59:36 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
//#include <fcntl.h>
//int main()
//{
//	int fd = open("tester.txt", O_RDWR);
//	ft_putendl_fd("hello",fd);
//	close(fd);
//	return 0;
//}
