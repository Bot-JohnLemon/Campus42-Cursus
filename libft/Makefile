#This is my first Makefile so Im commenting all the lines to remember how does the Makefile really works 

#This is the name after the complation
NAME = libft.a

#Those are the sources (the functions)
SRC = ft_atoi.c	ft_isascii.c	ft_memcpy.c	ft_strlcat.c	ft_strrchr.c	\
			ft_bzero.c	ft_isdigit.c	ft_memmove.c	ft_strlcpy.c	ft_tolower.c	\
			ft_calloc.c	ft_isprint.c	ft_memset.c	ft_strlen.c	ft_toupper.c	\
			ft_isalnum.c	ft_memchr.c	ft_strchr.c	ft_strncmp.c	ft_isalpha.c	\
			ft_memcmp.c	ft_strdup.c	ft_strnstr.c

#Here I create the Object Files
OBJ = $(SRCS:.c=.o)

#This is the compiler i will use
CC = gcc

#Those are the flags ill use when compiling
CFLAGS = -Wall -Werror -Wextra -I.

#This is the command to delete the files (CLEAN)
RM = rm -rf

#This is the target
all: $(NAME)

#This is the full command to create the object files (check command "ar")
$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

#This is the full comand to compile everything
$(OBJ): $(FILES)
		$(CC) $(CFLAGS) $(FILES)

#This the clean rule on the Makefile
clean:
	$(RM) $(OBJ)

#This is the full clean rule(cleaning .o files and bin file)
fclean:	clean
	$(RM) $(NAME)

#This will remake the bin file
re:
	fclean $(NAME)

#This avoids the relinking
.PHONY:	all clean fclean re

