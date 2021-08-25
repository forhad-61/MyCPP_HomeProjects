#include <iostream>

void add_two(int x) {
    std::cout << (x += 2); 
    // since << has higher precedence than +=, 
    // if you don't wrap the equation with braces, 
    // it complains error. 
}

int main() {

    int x{1};
    add_two(x);

    return 0;
} 
