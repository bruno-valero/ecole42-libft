NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -g3
FUNCTIONS = ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_itoa.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_tolower.c \
			ft_calloc.c \
			ft_strtrim.c \
			ft_split.c

OBJ := $(FUNCTIONS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

print:

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)
