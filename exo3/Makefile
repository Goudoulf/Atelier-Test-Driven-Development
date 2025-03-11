NAME := test_diamant.out
CC := cc
CFLAGS := -Wall -Wextra -Werror
INCLUDES := ./
C_FILES := diamant.c \
		   test_diamant.c \
		   unity.c \

all: $(NAME)

$(NAME): $(C_FILES)
	$(CC) $(CFLAGS) -I $(INCLUDES) $^ -o $@
