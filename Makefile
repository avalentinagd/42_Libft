NAME			= libft.a
CC				= gcc
CFLAGS			= -Wall -Wextra -Werror
AR				= ar
ARFLAGS			= -rcs
INCLUDES 		= -Iincludes
SRCS_DIR		= .
SRCS			= 	$(SRCS_DIR)/ft_isalpha.c $(SRCS_DIR)/ft_isdigit.c \
					$(SRCS_DIR)/ft_isalnum.c $(SRCS_DIR)/ft_isascii.c \
					$(SRCS_DIR)/ft_isprint.c $(SRCS_DIR)/ft_strlen.c \
					$(SRCS_DIR)/ft_memset.c $(SRCS_DIR)/ft_bzero.c \
					$(SRCS_DIR)/ft_memcpy.c $(SRCS_DIR)/ft_memmove.c \
					$(SRCS_DIR)/ft_strlcpy.c $(SRCS_DIR)/ft_strlcat.c \
					$(SRCS_DIR)/ft_toupper.c $(SRCS_DIR)/ft_tolower.c \
					$(SRCS_DIR)/ft_strchr.c $(SRCS_DIR)/ft_strrchr.c \
					$(SRCS_DIR)/ft_strncmp.c $(SRCS_DIR)/ft_memchr.c \
					$(SRCS_DIR)/ft_memcmp.c $(SRCS_DIR)/ft_strnstr.c \
					$(SRCS_DIR)/ft_atoi.c $(SRCS_DIR)/ft_calloc.c \
					$(SRCS_DIR)/ft_strdup.c $(SRCS_DIR)/ft_substr.c \
					$(SRCS_DIR)/ft_strjoin.c $(SRCS_DIR)/ft_strrchr.c 
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

bonus: all

.PHONY: all clean fclean re 