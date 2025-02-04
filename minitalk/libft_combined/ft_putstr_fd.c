/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:32:54 by yulpark           #+#    #+#             */
/*   Updated: 2024/10/14 19:00:39 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
//#include <fcntl.h>
//int main()
//{
//	char *s = "hello";
//	int fd = open("tester.txt",O_RDWR);
//	ft_putstr_fd(s, fd);
//	close(fd);
//	return 0;
//}
