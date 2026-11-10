# Makefile

NAME = bonus_2

SRCS = bonus2.c \
	counts_words.c

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all
