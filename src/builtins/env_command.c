/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_command.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:32:07 by edoardo           #+#    #+#             */
/*   Updated: 2023/10/14 19:14:49 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/minishell.h"

void	env_command(char **mini)
{
	int	i;

	i = 0;
	while (mini[i])
	{
		ft_putstr_fd(mini[i], 1);
		ft_putstr_fd("\n", 1);
		i++;
	}
}
