NAME_C = client
NAME_S = server
NAME_C_B = client_bonus
NAME_S_B = server_bonus

SERVER_SRCS = server.c
CLIENT_SRCS = client.c
SERVER_BONUS_SRCS = server_bonus.c
CLIENT_BONUS_SRCS = client_bonus.c

LIBFT = libft_combined/libft.a

SERVER_OBJECTS = $(SERVER_SRCS:.c=.o)
CLIENT_OBJECTS = $(CLIENT_SRCS:.c=.o)
SERVER_BONUS_OBJECTS = $(SERVER_BONUS_SRCS:.c=.o)
CLIENT_BONUS_OBJECTS = $(CLIENT_BONUS_SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3
R = ar rsc
RM = rm -f

all: $(NAME_C) $(NAME_S)
bonus: $(NAME_C_B) $(NAME_S_B)

$(NAME_C): $(CLIENT_OBJECTS) $(LIBFT)
	$(CC) $(CFLAGS) $(CLIENT_OBJECTS) $(LIBFT) -o $(NAME_C)

$(NAME_S): $(SERVER_OBJECTS) $(LIBFT)
	$(CC) $(CFLAGS) $(SERVER_OBJECTS) $(LIBFT) -o $(NAME_S)

$(NAME_C_B): $(CLIENT_BONUS_OBJECTS) $(LIBFT)
	$(CC) $(CFLAGS) $(CLIENT_BONUS_OBJECTS) $(LIBFT) -o $(NAME_C_B)

$(NAME_S_B): $(SERVER_BONUS_OBJECTS) $(LIBFT)
	$(CC) $(CFLAGS) $(SERVER_BONUS_OBJECTS) $(LIBFT) -o $(NAME_S_B)

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(LIBFT):
	$(MAKE) -C libft_combined

clean:
	$(MAKE) -C libft_combined clean
	$(RM) $(CLIENT_OBJECTS) $(SERVER_OBJECTS) $(CLIENT_BONUS_OBJECTS) $(SERVER_BONUS_OBJECTS)

fclean: clean
	$(MAKE) -C libft_combined fclean
	$(RM) $(NAME_C) $(NAME_S) $(NAME_C_B) $(NAME_S_B)

re: fclean all
