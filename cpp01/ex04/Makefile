NAME = SedSUCKS

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
RM = rm -f

MAIN = main.cpp
SRC = runSed.cpp printError.cpp
OBJ = ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJ} $(MAIN)
	@${CXX} ${CXXFLAGS} -o ${NAME} ${MAIN} ${OBJ}

%.o: %.cpp
	@${CXX} ${CXXFLAGS} -c $< -o $@

clean:
	@${RM} ${OBJ}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY = all clean fclean re
