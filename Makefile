NAME		= libftprintf.a
LOCLIBFT	= ./libft
LOCLIBPTF	= .
SRCS		= ft_printf.c ft_printf_utils.c ft_puthex.c ft_utoa.c
OBJS		= $(SRCS:.c=.o)
PROJ		= printf
UTIL		= ar
OPT			= rc
SUMM		= ranlib
RM			= rm -f
FLAG		= -Wall -Wextra -Werror
COMP		= cc

all:	$(NAME)

$(NAME):	$(LOCLIBFT)/libft.a $(OBJS) libft$(PROJ).h
	cp $(LOCLIBFT)/libft.a $(NAME)
	$(UTIL) $(OPT) $(NAME) $(OBJS)
	$(SUMM) $(NAME)

$(LOCLIBFT)/libft.a:
	make -C $(LOCLIBFT)

clean:
	make clean -C $(LOCLIBFT)
	$(RM) $(OBJS)

fclean: clean
	make fclean -C $(LOCLIBFT)
	$(RM) $(NAME)

re: fclean all

list:
	ls -la

libft$(PROJ).out:	$(NAME) libft$(PROJ).h main.c
	$(COMP) $(FLAG) -o libft$(PROJ).out main.c -L$(LOCLIBPTF) -lft$(PROJ)

run: libft$(PROJ).out
	./libft$(PROJ).out

fclean$(PROJ): fclean
	$(RM) libft$(PROJ).out

.PRONH: all $(NAME) clean fclean re list libft$(PROJ).out run fclean$(PROJ)
