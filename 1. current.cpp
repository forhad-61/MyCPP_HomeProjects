#include <iostream>

void printer(int ray[], int size) {
    std::cout << "In fucntion: ";
    std::cout << "size: " << sizeof(ray) / sizeof(int);
    for(int i = 0; i < size; i++) {
        std::cout << ray[i];
    }
    std::cout << '\n';
    std::cout << '\n';
}

int main() {

    int array[] = {4, 8, 9, 6, 45, 1, 87, 7};
    int size{8};


    std::cout << "Before function: \n";
    std::cout << "size: " << sizeof(array) / sizeof(int);
    for(int i = 0; i < size; i++) {
        std::cout << array[i];
    }
    std::cout << '\n';
    std::cout << '\n';

    printer(array, size); // function call

    std::cout << "After passing in function: \n";
    std::cout << "size: " << sizeof(array) / sizeof(int);
    for(int i = 0; i < size; i++) {
        std::cout << array[i];
    }

    std::cout << '\n';
    std::cout << '\n';


    return 0;
}
