NAME			=	materia

CC				=	c++
CFLAGS			=	-Wall -Werror -Wextra
STD				=	-std=c++98

RM				=	rm -rf

SRCS 			=	main.cpp \
					AMateria.cpp \
					Ice.cpp \
					Cure.cpp \
					MateriaSource.cpp Character.cpp\

OBJ 			=	$(SRCS:.cpp=.o)

all				:	$(NAME)

$(NAME)			:	$(OBJ)
					@$(CC) $(CFLAGS) $(STD) $^ -o $(NAME)

%.o				:	%.cpp
					@$(CC) $(CFLAGS) $(STD) -c $< -o $@

clean			:
					@$(RM) -rf $(OBJ)
			

fclean			:	clean
					@$(RM) $(NAME)

re				:	fclean all

.PHONY			:	all clean fclean re