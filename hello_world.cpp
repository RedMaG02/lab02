#include <iostream>
#include <string>

int main()
{
    string name; // строка - имя
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello world from " << name << endl;
    return 0; // вернуть 0
}