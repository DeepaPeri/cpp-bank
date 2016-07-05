all: clean init bank.exe

bank.exe: build/main.o build/account.o
	g++ -o build/bank.exe build/main.o build/account.o

build/account.o: src/main/cpp/account.cpp
	g++ -c src/main/cpp/account.cpp -o build/account.o

build/main.o: src/main/cpp/main.cpp
	g++ -c src/main/cpp/main.cpp -o build/main.o

init: 
	mkdir build

clean: 
	rm -rf build

