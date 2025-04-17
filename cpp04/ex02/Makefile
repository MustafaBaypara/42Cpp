NAME			=	animal

CC				=	c++
CFLAGS			=	-Wall -Werror -Wextra
STD				=	-std=c++98

RM				=	rm -rf

SRCS 			=	main.cpp \
					AAnimal.cpp \
					Dog.cpp \
					Cat.cpp \
					Brain.cpp \

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