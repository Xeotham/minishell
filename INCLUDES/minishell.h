/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaouas <mhaouas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:20:52 by mhaouas           #+#    #+#             */
/*   Updated: 2024/02/29 14:04:08 by mhaouas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

/*================================== INCLUDES ================================*/

# include "../Libft/libft.h"
#include <readline/readline.h>
#include <readline/history.h>
# include <sys/wait.h>
# include <limits.h>
# include <errno.h>
# include <signal.h>
# include <term.h>

/*================================ PIPE FD TYPE ==============================*/
# define READ_FD 0
# define WRITE_FD 1

/*=================================== STRUCT =================================*/
typedef struct s_exec
{
	char	*command;
	char	**flags;
	char	**envp;
	int		in;
	int		out;
} t_exec;


typedef struct s_pipex
{
	struct s_exec	cmd;
	int				cmd_number;
	int				total_number_of_cmd;
	pid_t			pid;
	struct s_pipex	*next;
}			t_pipex;

typedef struct s_minishell
{
	struct s_pipex	**cmd;
	char			*path;
}			t_minishell;

#endif