/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaouas <mhaouas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:38:09 by mhaouas           #+#    #+#             */
/*   Updated: 2024/02/29 13:31:38 by mhaouas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/minishell.h"

int	main(int ac, char **av, char **env)
{
	char	nl;
	int		i;

	(void) env;
	nl = 1;
	i = 0;
	if (ac > 1 && !ft_strncmp(av[1], "-n", 3))
	{
		nl = 0;
		i++;
	}
	while(av[++i])
	{
		printf("%s", av[i]);
		if (av[i + 1])
			printf(" ");
	}
	if (nl == 1)
		printf("\n");
}
