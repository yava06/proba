DIR_BIN = ./bin
DIR_BUILD = ./build
DIR_SRC = ./src
all: $(DIR_BIN)/main

$(DIR_BIN)/main: $(DIR_BUILD)/main.o $(DIR_BUILD)/table.o $(DIR_BUILD)/develop.o
	g++ -Wall -Werror -o $(DIR_BIN)/main $(DIR_BUILD)/main.o $(DIR_BUILD)/table.o $(DIR_BUILD)/develop.o
$(DIR_BUILD)/main.o: $(DIR_SRC)/main.cpp
	g++ -Wall -Werror -o $(DIR_BUILD)/main.o -c $(DIR_SRC)/main.cpp 
$(DIR_BUILD)/table.o: $(DIR_SRC)/table.cpp
	g++ -Wall -Werror -o $(DIR_BUILD)/table.o -c $(DIR_SRC)/table.cpp
$(DIR_BUILD)/develop.o: $(DIR_SRC)/develop.cpp
	g++ -Wall -Werror -o $(DIR_BUILD)/develop.o -c $(DIR_SRC)/develop.cpp        

test:
	$(DIR_BIN)/main

.PHONY: clean 

clean:
	rm $(DIR_BIN)/main

FORMAT:
	clang-format -i $(DIR_SRC)/*.h
	clang-format -i $(DIR_SRC)/*.cpp
