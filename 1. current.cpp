#include <iostream>

void printer(int ray[], int size) {
    std::cout << "In fucntion: ";

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
    for(int i = 0; i < size; i++) {
        std::cout << array[i];
    }
    std::cout << '\n';
    std::cout << '\n';

    printer(array, size);

    std::cout << "After passing in function: \n";
    for(int i = 0; i < size; i++) {
        std::cout << array[i];
    }

    std::cout << '\n';
    std::cout << '\n';


    return 0;
}
