NAME = libft.a

LIBFT_SOURCES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memmove.c\
				ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c\
					ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c\
						ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c\
							ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_memcpy.c\
								ft_lstadd_back.c ft_lstadd_front.c ft_lstlast.c ft_lstsize.c ft_lstnew.c

PRINTF_SOURCES = ft_printers.c ft_printf.c ft_printhex.c ft_unsigned.c

GNL_SOURCES = get_next_line_bonus.c get_next_line_utils_bonus.c

LIBFT_OBJECTS = $(LIBFT_SOURCES:.c=.o)
PRINTF_OBJECTS = $(PRINTF_SOURCES:.c=.o)
GNL_OBJECTS = $(GNL_SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
R = ar rsc
RM = rm -f

all: $(NAME)

$(NAME): $(LIBFT_OBJECTS) $(PRINTF_OBJECTS) $(GNL_OBJECTS)
	$(R) $@ $^

$(LIBFT_OBJECTS): $(LIBFT_SOURCES)
	$(CC) $(CFLAGS) -c $^

$(PRINTF_OBJECTS): $(PRINTF_SOURCES)
	$(CC) $(CFLAGS) -c $^

$(GNL_OBJECTS): $(GNL_SOURCES)
	$(CC) $(CFLAGS) -c $^

clean:
	$(RM) $(LIBFT_OBJECTS) $(PRINTF_OBJECTS) $(GNL_OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
