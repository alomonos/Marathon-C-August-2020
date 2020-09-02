NAME = minilibmx.a

FILES = mx_atoi \
	mx_isdigit \
	mx_isspace \
	mx_printchar \
	mx_printint \
	mx_strcmp \
	mx_strcpy \
	mx_strlen \



SRC_PREFFIX = $(addprefix src/, $(FILES))
HEADER = inc/minilibmx.h
DEL_SRC = $(addsuffix .c, $(FILES))
SRC = $(addsuffix .c, $(SRC_PREFFIX))
SRC_COMPILE = $(addsuffix .c, $(SRC_PREFFIX))
OBJ = $(addsuffix .o, $(FILES))
CFLAGS = -std=c11

all: install

install:
	@clang $(CFLAGS) -c $(SRC_COMPILE)
	@ar rc $(NAME) $(OBJ)
	@mkdir -p obj
	@cp $(OBJ) obj/
	@rm -rf $(OBJ)

uninstall: clean
	@rm -rf $(NAME)
clean:
	@rm -rf obj
reinstall: uninstall install
