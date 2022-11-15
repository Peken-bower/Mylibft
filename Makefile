# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 03:51:41 by aelmrabe          #+#    #+#              #
#    Updated: 2022/11/14 00:25:19 by aelmrabe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_memset.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c	ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_isdigit.c ft_atoi.c ft_split.c ft_strtrim.c ft_strchr.c ft_itoa.c\
ft_strjoin.c ft_strdup.c ft_substr.c ft_strnstr.c ft_strrchr.c ft_strmapi.c ft_striteri.c ft_strncmp.c ft_toupper.c ft_tolower.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_putchar_fd.c\
ft_isprint.c ft_isascii.c ft_isalpha.c ft_isalnum.c ft_calloc.c ft_bzero.c

CC = gcc

FLAGS = -Wall -Wextra -Werror -c

OBJS = ${SRCS:.c=.o}

NAME = libft.a

#.RECIPEPREFIX = *

RM = rm -f

%.o: %.c libft.h
	${CC} ${FLAGS} $< -o $@

# The $< = %.c the first dependencie and %@ the name rule %.o

${NAME}:${OBJS}
	ar -rc $@ ${OBJS}

all:${NAME}

fclean:clean
	${RM} ${NAME}

clean :
	${RM} ${OBJS}

re : fclean all

.PHONY : clean all fclean re
