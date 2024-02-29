/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaouas <mhaouas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:59:45 by mhaouas           #+#    #+#             */
/*   Updated: 2024/02/27 19:46:58 by mhaouas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <unistd.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	ac = open("/dev/stderr", O_RDONLY);
	(void) av;
	printf("Test isatty() : %d, tty type : %s\n", isatty(ac), ttyname(ac));
}