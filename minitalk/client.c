/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:07:50 by yulpark           #+#    #+#             */
/*   Updated: 2025/02/04 20:47:43 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	g_received = 0;

static void	received_signal(int sig)
{
	if (sig == SIGUSR1)
		g_received = 1;
}

static void	print_null(int pid)
{
	int	c;

	c = 0;
	while (c++ < 8)
	{
		kill(pid, SIGUSR1);
		while (g_received == 0)
			usleep(1);
		g_received = 0;
	}
}

static void	send_signal(int pid, char *str)
{
	int	j;
	int	i;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (j <= 7)
		{
			if ((str[i] >> (7 - j)) & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			while (g_received == 0)
				usleep(1);
			g_received = 0;
			j++;
		}
		i++;
	}
	print_null(pid);
}

int	main(int argc, char *argv[])
{
	int					pid;
	char				*str;
	struct sigaction	sa;

	if (argc != 3)
		return (1);
	pid = ft_atoi(argv[1]);
	str = argv[2];
	sa.sa_flags = 0;
	sa.sa_handler = received_signal;
	sigaction(SIGUSR1, &sa, NULL);
	send_signal(pid, str);
	return (0);
}
