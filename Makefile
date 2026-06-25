NAME			= libft.a
CC				= gcc
CFLAGS			= -Wall -Wextra -Werror
AR				= ar
ARFLAGS			= -rcs
INCLUDES 		= -Iincludes
SRCS_DIR		= .
SRCS			= 	$(SRCS_DIR)/ft_isalpha.c $(SRCS_DIR)/ft_isdigit.c $(SRCS_DIR)/ft_isalnum.c $(SRCS_DIR)/ft_isascii.c $(SRCS_DIR)/ft_isprint.c $(SRCS_DIR)/ft_strlen.c $(SRCS_DIR)/ft_memset.c $(SRCS_DIR)/ft_bzero.c $(SRCS_DIR)/ft_memcpy.c $(SRCS_DIR)/ft_memmove.c $(SRCS_DIR)/ft_strlcpy.c $(SRCS_DIR)/ft_strlcat.c $(SRCS_DIR)/ft_toupper.c $(SRCS_DIR)/ft_tolower.c $(SRCS_DIR)/ft_strchr.c $(SRCS_DIR)/ft_strrchr.c $(SRCS_DIR)/ft_strncmp.c $(SRCS_DIR)/ft_memchr.c
OBJS_DIR		= $(SRCS_DIR)
OBJS			= $(patsubst $(SRCS_DIR)/%.c, $(OBJS_DIR)/%.o, $(SRCS))
RM				= rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(OBJS_DIR)/%.o : $(SRCS_DIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 