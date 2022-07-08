NAME = megaphone

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
RM = rm -f

MAIN = megaphone.cpp

all: ${NAME}

${NAME}: $(MAIN)
	@${CXX} ${CXXFLAGS} -o ${NAME} ${MAIN}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY = all fclean re
