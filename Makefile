#Make file for CI program experiments
#Version 1.0 before customization

all:
	gcc -ggdb -c -Wall -lstdc++ -Werror -fpic utility.cpp -o utility.o
	gcc -ggdb -c -Wall -lstdc++ -Werror -fpic explore.cpp -o explore.o
	gcc -ggdb -lstdc++ -shared -o libutility.so utility.o

ut:
	gcc  utility.cpp explore.cpp test.cpp -ggdb -lstdc++ -o utility.exe

clean:
	rm *.o *.so *.exe

