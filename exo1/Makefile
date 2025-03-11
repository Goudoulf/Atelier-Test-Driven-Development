NAME := test_find_min_temp.out
CC := cc
CFLAGS := -Wall -Wextra -Werror
INCLUDES := ./
C_FILES := find_min_temp.c \
		   test_find_min_temp.c \
		   unity.c \

all : $(NAME)

$(NAME): $(C_FILES)
	$(CC) $(CFLAGS) -I $(INCLUDES) $^ -o $@
