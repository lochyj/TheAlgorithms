# We use a makefile to compile all of the compiled languages and use the run statement to run all of the algorithms

# The makefile is designed to be used on unix like systems such as linux, bsd and possibly macos

all: c run

c:
	gcc -c example.c -o ./temp/example_c.out
	gcc ./temp/example_c.out -o ./build/example_c.bin

run:
	clear
# Python
	py ./example.py
# C
	./build/example_c.bin

