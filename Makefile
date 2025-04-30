# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erwanhuyberechts <erwanhuyberechts@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/21 16:42:58 by ehuybere          #+#    #+#              #
#    Updated: 2025/04/30 15:18:49 by erwanhuyber      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(LIBFT_DIR)

SRCS = ft_printf.c \
       ft_format_utils.c \
       ft_converters_1.c \
       ft_converters_2.c \
       ft_converters_3.c

OBJS = $(SRCS:.c=.o)

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

HEADERS = printf.h

all: $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(LIBFT) $(OBJS)
	ar -x $(LIBFT)
	ar rcs $(NAME) $(OBJS) *.o
	rm -f *.o
	
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re