all: bank.exe

bank.exe: main.o account.o
	gcc -o bank.exe main.o account.o

account.o: src/main/cpp/account.cpp
	gcc -c src/main/cpp/account.cpp

main.o: src/main/cpp/main.cpp
	gcc -c src/main/cpp/main.cpp

