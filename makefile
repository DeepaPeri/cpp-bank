all: clean init bank test

bank: menu account main
	g++ -o build/bank.exe build/main.o build/account.o build/menu.o

account: 
	g++ -c src/main/cpp/account.cpp -o build/account.o

main: 
	g++ -c src/main/cpp/main.cpp -o build/main.o

menu: 
	g++ -c src/main/cpp/menu.cpp -o build/menu.o

init: 
	mkdir build
	mkdir build/test

clean: 
	rm -rf build


test: test-compile
	build/test/menuTest.exe

test-compile:
	g++ -Isrc/main/cpp src/test/cpp/menuTest.cpp -o build/test/menuTest.exe build/menu.o

