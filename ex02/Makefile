files.c = Account.cpp

CFLAGS = -g -Wall -Wextra -Werror

NAME = account

all : $(NAME)

$(NAME) : $(files.c)
		clang++ $(CFLAGS) $(files.c) -o $(NAME)


fclean :
		@rm  -f $(NAME)
		@echo "\033[7mfclean is done!\033[0m"

re	:  fclean all	


.PHONY : all  fclean