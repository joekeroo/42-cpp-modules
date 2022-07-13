NAME = zombie

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
RM = rm -f

MAIN = main.cpp

all: ${NAME}

${NAME}: $(MAIN)
	@${CXX} ${CXXFLAGS} -o ${NAME} ${MAIN}

fclean:
	@${RM} ${NAME}

re: fclean all

.PHONY = all fclean re
