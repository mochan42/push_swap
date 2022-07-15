# **************************************************************************** #
# VARIABLES

NAME			:= push_swap

CC				:= gcc
CFLAGS			:= -Wall -Wextra -Werror -I inc
RM				:= rm -rf
INCS			:= -I ./inc/
HEADER			:= ./inc/push_swap.h

LIB_DIR			:= libft
LIBFT_A			:= ./libft/libft.a

FT_PRINTF_DIR	:= ft_printf
LIBFTPRINTF_A	:= ./ft_printf/ft_printf.a

SRC_DIR			:= ./src/
OBJ_DIR			:= ./obj/

# **************************************************************************** #
# COLORS

GREEN		:= \033[0;92m
YELLOW		:= \033[0;93m
BLUE		:= \033[0;94m
END_COLOR	:= \033[0;39m

# **************************************************************************** #
# SOURCES

SRC_FILES	:=	push_swap.c check_if_sorted.c \
				input_error_handling.c input_error_handling_2.c \
				stack_utils_1.c stack_utils_2.c stack_utils_3.c \
				moves_single_stack.c moves_both_stacks.c \
				redirect_2345.c sort_2_elements.c \
				sort_3_elements_decision.c sort_3_elements_actions.c \
				sort_4_elements.c sort_5_elements.c sort_n_elements_radix.c \
				free_utils.c \

OBJ_FILES	:= ${SRC_FILES:.c=.o}
SRC			:= $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ			:= $(addprefix $(OBJ_DIR), $(OBJ_FILES))

# **************************************************************************** #
# RULES

all: $(OBJ_DIR) $(NAME)

$(NAME): $(OBJ)
	echo "make $(LIB_DIR)"
	make -C $(LIB_DIR)
	echo "make $(FT_PRINTF_DIR)"
	make -C $(FT_PRINTF_DIR)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT_A) $(LIBFTPRINTF_A) -o $(NAME)
	echo "$(GREEN)$(NAME) compiled :)$(END_COLOR)"
# -C	:	make option that tells make to change directory before execution.

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCS)
# -c	:	gcc option to compile each .c file into .o file.
# $<	:	represents the first prerequisite of the rule (each .c file 
#			contained in the src folder).
# -o	:	gcc option to define the name of the program (output) file :
#			"push_swap".
# $@	:	represents the filename of the target of the rule, i.e. each output
#			file which will be linked with the push_swap.h header file.

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

clean:
	$(RM) $(OBJ)
	make clean -C $(LIB_DIR)
	make clean -C $(FT_PRINTF_DIR)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(LIBFT_A)
	$(RM) $(LIBFTPRINTF_A)
	$(RM) $(OBJ_DIR)

re: fclean all
	@echo "$(GREEN)Cleaned all and rebuilt $(NAME), $(LIB_DIR) and $(FT_PRINTF_DIR)!$(END_COLOR)"

.PHONY:		all clean fclean re
