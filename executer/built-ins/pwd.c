/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioulkhir <ioulkhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:50:34 by ioulkhir          #+#    #+#             */
/*   Updated: 2025/02/09 11:06:25 by ioulkhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

void	ft_pwd(char **cmd, t_env *my_env, t_garbage **my_garbage)
{
	char	cwd[1024];

	(void)cmd;
	(void)my_env;
	(void)my_garbage;
	getcwd(cwd, sizeof(cwd));
	printf("%s\n", cwd);
	exit(EXIT_SUCCESS);
}
