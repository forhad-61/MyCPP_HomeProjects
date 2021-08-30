#include <iostream>

int main() {

    int x{10};
    for(int i{}; i < x; --x) { 
        std::cout << x << std::endl;
    }
    // as long as 0(i) is less than 10, 9 & so on(x), 
    // the loop will continue 

    return 0;
}
