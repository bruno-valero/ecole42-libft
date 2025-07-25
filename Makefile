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
			ft_split.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c

OBJ := $(FUNCTIONS:%.c=%.o)

BONUS_FNS = ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstadd_back_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstmap_bonus.c
BONUS_OBJ := $(BONUS_FNS:%.c=%.o)

all: $(NAME)

bonus: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus:
		@$(MAKE) OBJ="$(OBJ) $(BONUS_OBJ)" all

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

so: clean
	$(CC) -fPIC $(CFLAGS) -c $(FUNCTIONS)
	$(CC) -shared -o libft.so $(OBJ)

.PHONY: all clean fclean re so
