# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaurel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 21:01:03 by amaurel           #+#    #+#              #
#    Updated: 2018/09/15 03:03:27 by amaurel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_NAME = putchar putstr memset bzero memcpy memccpy memmove memchr memcmp strlen strdup strcpy strncpy \
		   strcat strncat strlcat strchr strrchr strstr strnstr strcmp strncmp atoi isalpha isdigit isalnum \
		   isascii isprint toupper tolower putendl putnbr putchar_fd putstr_fd putendl_fd putnbr_fd memalloc \
		   memdel strnew strdel strclr striter striteri strmap strmapi strequ strnequ strsub strjoin strrev \
		   strtrim strsplit itoa lstnew lstdelone lstdel lstadd lstiter lstmap atoi_base itoa_base convert_base \
		   convert_base_int pow sqrt factorial is_prime strcapitalize
SRC_c = $(addsuffix .c, $(SRC_NAME))
SRC = $(addprefix ft_, $(SRC_c))
OBJ = $(SRC:.c=.o)
HD = libft.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRC) -I $(HD)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
