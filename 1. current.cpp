#include <iostream>
#include <cmath> 

int main() {
    // which number is greater, based on user input
    int x{}, y{}, sum{};
    std::cout << "Enter 2 num: ";
    std::cin >> x >> y;
    
    if
    // we may need to use swap() too. 
    //check if x is greater than y or vice versa using max(). It's probably in cmath header.
    while(x <= y) {
        sum += x;
        ++x;
    }

    std::cout << sum;


    return 0;
}
