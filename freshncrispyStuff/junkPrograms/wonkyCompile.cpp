// this program can differenciate between C++11 standard and pre C++11 standard.
// Pre C++11 standard, this will output "abbbbb".
// Post C++11 standard, this will output "aaaaa".
// i don't know why lul.
// Using g++ the command to compile with C++11 is 
// $ g++ -std=c++11 your_file.cpp -o your_program
// or
// $ g++ -std=c++0x your_file.cpp -o your_program

#include <iostream>
#include <vector>

struct Foo
{
    Foo() { std::cout<<"a"; }
    Foo(const Foo&) { std::cout<<"b"; }
};

int main()
{
	std::vector<Foo> bar(5);
	
	return 0;
}
