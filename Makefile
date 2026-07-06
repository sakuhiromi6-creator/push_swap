NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = operationsP.c operationsR.c operationsRR.c operationsS.c parsing.c stack.c main.c
OBJ = $(SRC:.c=.o)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compilato: $<"

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Adesso compilo libft"
	@make -C libft --no-print-directory
	@$(CC) $(CFLAGS) $(OBJ) -Llibft -lft -o $(NAME)
	@echo "push_swap creato!"

clean:
	@rm -f $(OBJ)
	@echo "File oggetto eliminati!"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) eliminato!"

re: fclean all

.PHONY: all clean fclean re