SRCS = ft_memset.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c	ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_isdigit.c ft_atoi.c ft_split.c ft_strtrim.c ft_strchr.c ft_itoa.c\
ft_strjoin.c ft_strdup.c ft_substr.c ft_strnstr.c ft_strrchr.c ft_strmapi.c ft_striteri.c ft_strncmp.c

CC = gcc

FLAGS = -Wall -Wextra -Werror -c

OBJS = ${SRCS:.c=.o}

NAME = libft.a

#.RECIPEPREFIX = *

RM = rm -f

%.o: %.c libft.h
	${CC} ${FLAGS} $< -o $@

${NAME}:${OBJS}
	ar -rc $@ ${OBJS}

all:${NAME}

fclean:clean
	${RM} ${NAME}

clean :
	${RM} ${OBJS}

re : fclean all

.PHONY : clean all fclean re