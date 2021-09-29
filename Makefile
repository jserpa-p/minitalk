# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jserpa-p <jserpa-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 15:07:34 by jserpa-p          #+#    #+#              #
#    Updated: 2021/09/29 14:41:27 by jserpa-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER 		= server
CLIENT		= client
CC 			= gcc
CFLAGS 		= -Wall -Wextra -Werror

all :
	@make -s -C libft
	@gcc -g -Wall -Wextra -Werror ./server.c libft/libft.a -o $(SERVER)
	@gcc -g -Wall -Wextra -Werror ./client.c libft/libft.a -o $(CLIENT)
	@printf "\e[38;5;46m Client built successfully \e[0m\n"
	@printf "\e[38;5;46m Server built successfully \e[0m\n"

clean :
	@make -s clean -C libft 
	@rm -rf ./client.o ./server.o

fclean : clean
	@make -s fclean -C libft
	@rm -rf $(SERVER) $(CLIENT) ./client.dSYM ./server.dSYM

re :	fclean all
bonus:	all

.PHONY: bonus re fclean clean all
