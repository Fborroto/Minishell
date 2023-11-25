/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fborroto <fborroto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:54:45 by edoardo           #+#    #+#             */
/*   Updated: 2023/11/01 19:00:20 by fborroto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/minishell.h"

void	ignore_signal_for_shell(void)
{
	signal(SIGQUIT, SIG_IGN);
	signal(SIGINT, inthandler);
}

void	inthandler(int sig)
{
	extern t_sig	g_sig;

	(void)sig;
	rl_on_new_line(); //forse manca qualcosa o dovrebbe stare alla fine
	rl_replace_line("", 0);
	rl_redisplay();
	g_sig.exit_status = 130;
}

void	init_signal(void)
{
	extern t_sig	g_sig;

	(void)g_sig;
	g_sig.sigint = 0;
	g_sig.sigquit = 0;
	g_sig.exit_status = 0;
}
