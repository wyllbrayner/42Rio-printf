SRCS	= ft_printf.c ft_putnbr_un_fd.c ft_putnbr_ex_fd.c ft_putnbr_pt_fd.c
OBJS	= $(SRCS:.c=.o)
PROJ	= printf
NAME	= libprintf.a
RM		= rm -f
UTIL	= ar
OPT		= rc
SUMM	= ranlib
FLAG	= -Wall -Wextra -Werror
COMP	= cc
LOCLIBFT	= ./libft

all:	$(NAME)

$(NAME):	$(LOCLIBFT)/libft.a $(OBJS) $(PROJ).h
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

.PRONH: all $(NAME) clean fclean re list
