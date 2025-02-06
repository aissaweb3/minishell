/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khoukouj <khoukouj@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-06 12:27:57 by khoukouj          #+#    #+#             */
/*   Updated: 2025-02-06 12:27:57 by khoukouj         ###   ########.ma       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r');
}

int	strlen_pars(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
