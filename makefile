cc=g++
TARGET = tetris
SOURCES= main.cpp\
Tetris.cpp\
Pane.cpp\
BoardPane.cpp\
InfoPane.cpp\
HelpPane.cpp\
StatPane.cpp\
NextPane.cpp\
block.cpp

all:
	$(cc) -o $(TARGET) $(SOURCES) -lncursesw
clean:
	rm -rf *.o $(TARGET)
