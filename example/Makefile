NAME := test_ft_atoi.out
CC := cc
CFLAGS := -Wall -Wextra -Werror
INCLUDES := ./
C_FILES := ft_atoi.c \
		   test_ft_atoi.c \
		   unity.c \
		   
all: $(NAME)

$(NAME): $(C_FILES)
	$(CC) $(CFLAGS) -I $(INCLUDES) $^ -o $@
