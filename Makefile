#Make file for CI program experiments

C_OPTIONS = -Wall -lstdc++ -Werror -fpic -ggdb
B_OPTIONS = -ggdb -lstdc++ -shared

all:
	gcc -c $(OPTIONS) utility.cpp -o utility.o
	gcc -c $(OPTIONS) explore.cpp -o explore.o
	gcc $(B_OPTIONS) -o libutility.so utility.o

ut:
	gcc  utility.cpp explore.cpp test.cpp -ggdb -lstdc++ -o utility.exe

clean:
	rm *.o *.so *.exe

