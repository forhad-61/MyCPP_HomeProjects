#include <iostream>

void print_pointer(int x) {
    int* ptr = &x;
    std::cout << "Pointer of " << x << " is " << ptr << std::endl;
}

int main() {

    std::cout << "Enter number: ";
    int x;
    std::cin >> x;

    std::cout << "\nPress m to call it's pointer - ";
    char y;
    std::cin >> y;

    if(y == 'm') {
        print_pointer(x);
    } else {
        std::cout << "Error! Something went wrong :/";
    }

    return 0;
}
