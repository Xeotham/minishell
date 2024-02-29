#================ COMPILATOR ================#
CC = cc
#=================== FLAGS ==================#
FLAGS = -Wall -Wextra -Werror -g -lreadline
#=================== NAME ===================#
NAME = minishell
#============= MANDATORY SOUCES =============#
SRCS = SRCS/main.c

#============ TRANSFORM .c TO .o ============#
OBJ = $(SRCS:.c=.o)


LIBFT = Libft/libft.a

all : $(NAME)

$(LIBFT) :
	@ $(MAKE) -C Libft all

%.o : %.c INCLUDES/minishell.h
	@ $(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ) $(LIBFT)
	$(CC) $(FLAGS) $(OBJ) $(LIBFT) -o $(NAME)
	
clean :
	@ $(MAKE) -C Libft clean
	rm -rf $(OBJ)

fclean :
	@ $(MAKE) -C Libft fclean
	rm -rf $(NAME) $(OBJ)

re : fclean all

.PHONY : all clean fclean re
