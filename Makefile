SRC_PUSH	= 	lst_new.c \
				lst_size.c \
				lst_first.c \
				lst_last.c \
				lst_push.c \
				lst_clear.c \
				lst_find_by_num.c \
				lst_find_by_index.c \
				lst_remove_first.c \
				lst_add_front.c \
				lst_remove_last.c \
				die.c \
				check_numbers.c \
				check_duplicated_values.c \
				check_numbers_size.c \
				get_numbers.c \
				swap.c \
				push.c \
				rotate.c \
				reverse_rotate.c \
				is_lst_sorted.c \
				fill_lst_index.c \
				read_instructions.c \
				is_str_equal.c \
				error_management.c \
				get_position.c \
				first_ab.c \
				print_lst.c \

SRC			=	push_swap_visualizer.c \
				move_number.c \



OBJS_DIR	=	objects

OBJS		=	$(patsubst %.c,$(OBJS_DIR)/%.o, $(SRC) $(SRC_PUSH))

LIBFT		=	./libft/libftprintf.a

CFLAGS		=	-I./ -lncurses

VPATH		=	./src \
				./src/push_src \
				./src/push_src/error \
				./src/push_src/instructions \
				./src/push_src/list \
				./src/push_src/utils \
				./src/visualizer_src \

NAME		=	visualizer

CC			=	cc

$(OBJS_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(OBJS_DIR):
	mkdir -p $@

$(NAME): $(OBJS_DIR) $(OBJS) $(LIBFT)
	$(CC) $(OBJS) $(LIBFT) $(CFLAGS) -o $@

$(LIBFT):
	make -C ./libft bonus

clean:
	rm -rf $(OBJS_DIR)
	make -C ./libft clean

fclean: clean
	rm -f $(NAME)
	make -C ./libft fclean

re: fclean all

.PHONY:	all clean fclean re bonus