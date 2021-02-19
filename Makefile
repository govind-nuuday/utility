#Make file for CI program experiments

all:
	gcc -c -Wall -lstdc++ -Werror -fpic utility.cpp -o utility.o
	gcc -lstdc++ -shared -o libutility.so utility.o

ut:
	gcc -D_UT utility.cpp -lstdc++ -o utility.exe

clean:
	rm *.o *.so *.exe

