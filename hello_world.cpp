#include <iostream>
#include <string>

int main() {
    std::cout << "Hello world" << std::endl;

    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Hello world from " << name << std::endl;
    //Very important comment
    return 0;
}
