# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/26 01:11:58 by aelmrabe          #+#    #+#              #
#    Updated: 2022/11/28 15:36:37 by aelmrabe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variable 

NAME		=	libft.a
HEADER		= 	../headers
SRCS_DIR	= 	src/
OBJS_DIR	= 	obj/
CC			= 	gcc
CFLAGS		= 	-Wall -Werror -Wextra -I
RM			=	rm -f
AR			=	ar rcs

# my colors check here https://urlis.net/3ienffm
#the colors i will use it with echo command it's just a Bash color !!

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

# Variable Source

IS_DIR	=	is/
IS		= 	ft_isalnum	ft_isalpha	ft_isascii	ft_isdigit	ft_isprint

MEM_DIR	=	mem/
MEM		= 	ft_bzero	ft_calloc	ft_memchr	ft_memcmp	ft_memcpy	ft_memmove	ft_memset

PUT_DIR	=	put/
PUT		=	ft_putchar_fd	ft_putendl_fd	ft_putnbr_fd	ft_putstr_fd

STR_DIR	=	str/
STR		= 	ft_split	ft_strchr	ft_strdup	ft_striteri	ft_strjoin	ft_strlcat	ft_strlcpy 	ft_strlen	ft_strlen	ft_strmapi	ft_strncmp	ft_strnstr	ft_strrchr	ft_strtrim	ft_substr

TO_DIR	=	to/
TO		= 	ft_atoi	ft_atoi		ft_tolower	ft_toupper

SRC_FILES+=$(addprefix $(IS_DIR),$(IS))
SRC_FILES+=$(addprefix $(MEM_DIR),$(MEM))
SRC_FILES+=$(addprefix $(PUT_DIR),$(PUT))
SRC_FILES+=$(addprefix $(STR_DIR),$(STR))
SRC_FILES+=$(addprefix $(TO_DIR),$(TO))

SRCS 	= $(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS 	= $(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC_FILES)))

OBJSF 	=	Nothing

all:	$(NAME)

# In this step i will take all object from OBJS_DIR and i will archive them with name (NAME == libft.a)
# after that i will generate an index to this archive 
$(NAME):	$(OBJS)
	@$(AR)	$(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo	"$(GREEN)✅ The Libft was successfully compiled! and the index was successfully generated $(DEF_COLOR)"

# in this step i will just take all the file C and compile them to .o file and i will send it to OBJ folder ?? 
# check the OBJ_DIR Variable 
$(OBJS_DIR)%.o : $(SRCS_DIR)%.c | $(OBJSF)
	@echo "🔰 $(YELLOW) Compiling $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) $(HEADER) -c $< -o $@

$(OBJSF):
	@mkdir	-p	$(OBJS_DIR)
	@mkdir	-p	$(OBJS_DIR)$(IS_DIR)
	@mkdir	-p	$(OBJS_DIR)$(MEM_DIR)
	@mkdir	-p	$(OBJS_DIR)$(PUT_DIR)
	@mkdir	-p	$(OBJS_DIR)$(TO_DIR)
	@mkdir	-p	$(OBJS_DIR)$(STR_DIR)

# with this clean i will remove all the Object file with out removing archive libft.a and libftprintf.a
# also for clean Object file of Libft i use the option C because it's needed when i try to clean directorys 
clean:
	@$(RM)	-rf	$(OBJS_DIR)
	@$(RM)	-f	$(OBJSF)
	@echo	"$(BLUE)🌀 all libft objects files was successfully cleaned! $(DEF_COLOR)"

# with this i will delete all the Object file first and after that i will delete the archive filee `.a`   
fclean:		clean
	@$(RM) -f $(NAME)
	@echo "$(CYAN)🌀 the libft executable files was successfully cleaned! $(DEF_COLOR)"

# with this i will run the rule fclean and after that i will run all so i will clear all object file and archive file and i will re make again
re: 		fclean all
	@echo "$(GREEN)🌀 Cleaned and rebuilt everything for printf! $(DEF_COLOR)"

# with this i will just run the norminette v3 for my project and i will grep the result 
norm: 
	@norminette $(SRCS) $(HEADER)
	@echo "$(GREEN)✅ Libft norminette is OK!$(DEF_COLOR)"

# with this target i will avoid a conflict when i have a file with same name with target.
.PHONY:		all clean fclean re norm