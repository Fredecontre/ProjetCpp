CC=g++
CCFLAGS= -Wall -std=c++11 -g
SRC= etrevivant.cpp terre.cpp ecosysteme.cpp terre.cpp TestCase.cpp
OBJ= $(SRC:.cpp=.o)
TST= $(TestCase.cpp)
OBJ_TEST = $(filter-out main.o, $(OBJ)) $(TST:.cpp=.o)
EXEC= testcase

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(LIBFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CCFLAGS) -o $@ -c $<

.PHONY: clean

clean :
	rm -f $(OBJ_TEST) TestCase.o
