/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khoukouj <khoukouj@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-05 13:00:46 by khoukouj          #+#    #+#             */
/*   Updated: 2025-02-05 13:00:46 by khoukouj         ###   ########.1337.ma  */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

t_2_exec	*parsing(char *line)
{
	char		*tmp;
	t_garbage	*garbage;

	tmp = line;
	garbage = NULL;
	line = ft_strtrim(line, " ", &garbage);
	free(tmp);
	if (ft_check_syntax_error(line) == -1)
		return (NULL);
	clear_garbage(&garbage);
	return (NULL);
}

int	main(int ac, char **av, char **envp)
{
	char		*line;
	t_2_exec	*lst;

	lst = NULL;
	while (1)
	{
		line = readline("minishell $");
		printf("%s\n", line);
		if (line && line[0])
		{
			add_history(line);
			lst = parsing(line);
		}
	}
	return (0);
}
