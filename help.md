# Compiler:
	* gcc: GNU compiler collection
	* gcc abc.c -o xyz: xyz will be exe file in windows
	* gcc zork.c -o zork && ./zork: Compile and run
	* ./ is the directory in which the exe file lives in.
	* g++ -o <output-file> <source-file>
	* -std=c++0x: Enables C++11
	* -Wall : Enable warnings.	

*	http://www.techytalk.info/c-cplusplus-library-programming-on-linux-part-one-static-libraries/
*	http://northstar-www.dartmouth.edu/doc/solaris-forte/manuals/c++/user_guide/Rev.html
	
# General
* C language standards:
	* ANSI C from late 1980
	* C99 standard from 1999
	* C11 released in 2011
* gcc supports all 3 standards.
	* GNU Compiler Collection
	* It can compile languages other than C
	* It's free.
* Comments: 
	* Multi line comments /* */
	* C99 standard supports single line comments //
* External libraries: C is so small that it has very little inbuilt.
	* stdio.h: Contains functions that interact with terminal
	* #include<stdio.h>
* All C code runs inside functions.
* main() is a special function that is entry point to the program.
	* int main(){}
	* A return value of 0 indicates success and any other value is failure.
	* echo %ErrorLevel% (OR) echo $? : Gives the exit status of a program.
* Functions:
* printf: Displays formatted output.
	* %s for string
	* %i for int
* stdio.h:
	* printf, scanf, puts("")
* stdlib.h: 
	* atoi(""): convert string to integer
* Strings: C language does not support strings out of the box.	

*******************************************************************
* Program: A series of instructions that can be executed repeately with varying input.
* Function: 
	* Parts: return, name, param, process
	* Analogy with some real world function showing each of these parts.
	* Re-usability: Ways to add two numbers
		* Program that adds two constants 5, 7
		* Program that accepts two numbers from command line and adds them.
		* Program with a function add, and uses it repeately to add multiple pairs.
* Main function: Entry to program.
	* Name => main
	* Return type: int
	* Return value 0 indicates success.
	* Any other return value indicates error.
	* OS receives this value and can be examined with
		* Unix: echo $
		* Windows: echo %ErrorLevel%
* Source file: File that we write program in.
	* Extension: .cpp, .cxx, .cp, .c => Different for different compilers.
* Input/Output:
	* C++ does not have any language feature to handle input/output.
	* Instead, input/output is facilitated using standard library 'iostream'
	* iostream consists of istream and ostream
	* Stream: Is a sequence of bytes flowing from source to destination.
	* istream: Handles bytes flowing from external to the program into the program.
	* ostream: Handles bytes flowing from program to some external destination.
	* cin: Console input - standard input - defined in iostream library.
		* Instance of istream, that can read data from input console - keyboard.
	* cout: Console output - standard output - defined in iostream library.
		* Instance of ostream, that can write data to output console - monitor.
	* cerr, clog: ostream instances, that are used to stream errors and logs to monitor.
	* endl: is a manipulator, that ends the current line and ***flushes*** the buffer.
	* std: It is the namespace in which all the variables of standard library are defined.
	* Name spaces are used to prevent name collision from different libraries.
* Including a library: #include<iostream>
	* #include is a compiler directive
	* iostream: Header of the library to be included.
	* This cannot be split into multiple lines.
	* It should not be defined inside a function - it should be defined globally.
* Using namespace:
	* use namespace std: With this statement in place, all the objects of the namespace can be directly referred.
	* std::cout vs cout
* Call chain:
	* 4 + 5 + 8 vs cout << a << b