COMPILER = g++
CPP_FILES = main.cpp stats.cpp
H_FILES = stats.h
FLAGS = --Wall
PROGRAM = bookbot

all:
	${COMPILER} ${CPP_FILES} -o ${PROGRAM}

clean:
	rm ${PROGRAM}