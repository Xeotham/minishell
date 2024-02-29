/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaouas <mhaouas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:33:20 by mhaouas           #+#    #+#             */
/*   Updated: 2024/02/29 14:26:36 by mhaouas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/minishell.h"

int	main(void)
{
	char	*login;
	char	*prompt;
	char	*tmp;
	char	*tmp2;

	login = getenv("USER") + 5;
	prompt = ft_strjoin("\033[31;1m", login);
	tmp = ft_strjoin(prompt, "@");
	free(prompt);
	tmp2 = ft_substr(getenv("SESSION_MANAGER"), 22, 3);
	prompt = ft_strjoin(tmp, tmp2);
	free(tmp2);
	tmp2 = ft_strdup(ft_strnstr(getenv("PWD"), login, ft_strlen(getenv("PWD"))) + ft_strlen(login));
	tmp = ft_strjoin(prompt, ":~");
	free(prompt);
	prompt = ft_strjoin(tmp, tmp2);
	free(tmp2);
	free(tmp);
	tmp = ft_strjoin(prompt, "> \033[0m");
	
	readline(tmp);
}