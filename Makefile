#Make file for CI program experiments

all:
	gcc -c -Wall -lstdc++ -Werror -fpic utility.cpp -o utility.o
	gcc -c -Wall -lstdc++ -Werror -fpic explore.cpp -o explore.o
	gcc -lstdc++ -shared -o libutility.so utility.o

ut:
	gcc utility.cpp explore.cpp test.cpp -lstdc++ -o utility.exe

clean:
	rm *.o *.so *.exe

