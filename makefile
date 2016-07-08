all: clean init bank.exe

bank.exe: build/menu.o build/main.o build/account.o
	g++ -o build/bank.exe build/main.o build/account.o

build/account.o: src/main/cpp/account.cpp
	g++ -c src/main/cpp/account.cpp -o build/account.o

build/main.o: src/main/cpp/main.cpp
	g++ -c src/main/cpp/main.cpp -o build/main.o

build/menu.o: src/main/cpp/menu.cpp
	g++ -c src/main/cpp/menu.cpp -o build/menu.o

init: 
	mkdir build
	mkdir build/test

clean: 
	rm -rf build


test: all test-compile
	./build/menuTest

test-compile:
	g++ -Isrc/main/cpp src/test/cpp/menuTest.cpp -o build/test/menuTest.exe

