SRC			=	push_swap_visualizer.c \

OBJS_DIR	=	objects

OBJS		=	$(patsubst %.c,$(OBJS_DIR)/%.o, $(SRC))

CFLAGS		=	-I./ -lncurses

VPATH		=	./src \

NAME		=	visualizer

CC			=	cc

$(OBJS_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(OBJS_DIR):
	mkdir -p $@

$(NAME): $(OBJS_DIR) $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $@

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re bonus