# **************************************************************************** #
# VARIABLES

NAME			:= push_swap
DIRS			:= proto

AR 				:= ar rc
CC				:= gcc
CFLAGS			:= -Wall -Wextra -Werror
RM				= rm -f

LIB_DIR			:= libft
LIBFT_A			:= ./libft/libft.a

FT_PRINTF_DIR	:= ft_printf
LIBFTPRINTF_A	:= ./ft_printf/ft_printf.a

# **************************************************************************** #
# COLORS

GREEN		:= \033[0;92m
YELLOW		:= \033[0;93m
BLUE		:= \033[0;94m
END_COLOR	:= \033[0;39m

# **************************************************************************** #
# SOURCES

SRCS		:=	push_swap.c check_if_sorted.c \
				input_error_handling.c input_error_handling_2.c \
				stack_utils_1.c stack_utils_2.c stack_utils_3.c \
				moves_single_stack.c moves_both_stacks.c \
				redirect_2345.c sort_2_elements.c \
				sort_3_elements_decision.c sort_3_elements_actions.c \
				sort_4_elements.c sort_5_elements.c sort_n_elements_radix.c \
				free_utils.c \

OBJS		:= $(SRCS:.c=.o)

# **************************************************************************** #
# RULES

all: $(NAME)

$(NAME): $(OBJS)
	@echo "make $(LIB_DIR)"
	@make -C $(LIB_DIR)
	@echo "make $(FT_PRINTF_DIR)"
	@make -C $(FT_PRINTF_DIR)
	@$(CC) $(CFLAGS) -g -o $(NAME) $(OBJS) $(LIBFT_A) $(LIBFTPRINTF_A)
	@echo "$(GREEN)$(NAME) compiled :)$(END_COLOR)"

clean:
	$(RM) $(OBJS)
	make clean -C $(LIB_DIR)
	make clean -C $(FT_PRINTF_DIR)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(LIBFT_A)
	$(RM) $(LIBFTPRINTF_A)

re: fclean all
	@echo "$(GREEN)Cleaned all and rebuilt $(NAME), $(LIB_DIR) and $(FT_PRINTF_DIR)!$(END_COLOR)"

.PHONY:		all clean fclean
