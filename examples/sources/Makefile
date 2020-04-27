##
## W O R K S H O P  C R I T E R I O N
##
## Corentin COUTRET-ROZET
## https://github.com/sheiiva/Workshop_Criterion
##
##

CC			=	gcc
LD			=	$(CC)
PRINT		=	@echo -e
RM          =   @rm -f

ROOT_PATH	=	../

INCLUDE_PATH		=	$(ROOT_PATH)include/

LIBSRC_PATH         =   libsrc/

override CFLAGS 	+=	-W -Wall -Werror -Wextra -I$(INCLUDE_PATH)
override LDFLAGS 	+=
override LDLIBS 	+=


TEST_SRC	=	hello_world.c		\

TEST_OBJ 	= 	$(SRC:.c=.o)

SRC			=	main.c				\
				$(TEST_SRC)

OBJ 		= 	$(SRC:.c=.o)


NAME 		= 	$(ROOT_PATH)binary
SRC_LIB 	= 	$(LIBSRC_PATH)libsrc.a

$(NAME): $(OBJ)
	$(PRINT) "\n------->\tPRECOMPILED SRC DEPENDENCIES.\n\nLET'S LINK IT ALL:\n"
	$(LD) $(CFLAGS) $^ $(LDFLAGS) $(LDLIBS) -o $@
	$(PRINT) "\n------->\tCONGRATS !\n"

all: $(NAME)

$(SRC_LIB): $(TEST_OBJ)
	$(PRINT) "\n------->\tPRECOMPILED SRC DEPENDENCIES.\n\nLET'S PACK SRC LIB:\n"
	@mkdir $(LIBSRC_PATH)
	$(AR) rc $@ $^
	$(PRINT) "\n------->\tCONGRATS ! YOUR SRC LIB HAS BEEN CREATED.\n"

lib: $(SRC_LIB)

clean:
	$(PRINT) "\n------->\tREMOVE TMP FILES\n"
	$(RM) $(OBJ) $(OBJ:.o=.gcno) $(OBJ:.o=.gcda)

fclean: clean
	$(PRINT) "------->\tREMOVE BINARY\n"
	$(RM) $(NAME)
	$(PRINT) "------->\tREMOVE LIBRARY\n"
	$(RM) $(SRC_LIB)
	$(RM) -r $(LIBSRC_PATH)

re: fclean all

.PHONY: all lib clean fclean re