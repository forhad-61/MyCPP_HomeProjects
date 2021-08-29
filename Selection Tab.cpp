#include <iostream>
#include <string>

int main() {

    std::cout << "=================================================" << std::endl;
    std::cout << "=========== Welcome to Selection Tab! ===========" << std::endl;
    std::cout << "=================================================" << std::endl << std::endl;

    std::cout << "Selection one option below by using the characters before them or press 'x' to terminate the program at anytime!" << std::endl << std::endl;

    std::cout << "a. play a song lyrics" << std::endl;
    std::cout << "b. throw a random number" << std::endl;
    std::cout << "c. enter your name & display it" << std::endl;
    std::cout << "d. write some number & sort them asc order" << std::endl;
    std::cout << "x. terminate the program!" << std::endl << std::endl;

    char latter;
    std::cin >> latter;
    switch(latter) {
case 'a':
    std::cout << "\"Close To The Sun\"" << std::endl;
    }

    return 0;
}
