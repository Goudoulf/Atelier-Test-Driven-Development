NAME := test_put_roman_numbers
CC := cc
CFLAGS := -Wall -Wextra -Werror
INCLUDES := ./
C_FILES := put_roman_numbers.c \
		   test_put_roman_numbers.c \
		   unity.c \

all: $(NAME)

$(NAME): $(C_FILES)
	$(CC) $(CFLAGS) -I $(INCLUDES) $^ -o $@

