/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:07:48 by yulpark           #+#    #+#             */
/*   Updated: 2025/02/04 20:44:01 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	assemble_signal(int sig, siginfo_t *info, void *context)
{
	static int				bit_counter = 0;
	static unsigned char	current = 0;
	static pid_t			client_pid = 0;

	(void)context;
	if (client_pid != info->si_pid)
	{
		bit_counter = 0;
		current = 0;
	}
	client_pid = info->si_pid;
	if (sig == SIGUSR1)
		current = ((current << 1) | 0);
	else if (sig == SIGUSR2)
		current = ((current << 1) | 1);
	bit_counter++;
	if (bit_counter == 8)
	{
		ft_printf("%c", current);
		bit_counter = 0;
		current = 0;
	}
	kill(client_pid, SIGUSR1);
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = assemble_signal;
	ft_printf("PID: %d\n", getpid());
	sigaction(SIGUSR2, &sa, NULL);
	sigaction(SIGUSR1, &sa, NULL);
	while (1)
		pause();
	return (0);
}
