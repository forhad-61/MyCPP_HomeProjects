#include <iostream>
#include <vector>

void vec_loop(std::vector<std::string> vec, vec.size()) {
    for(auto i = 0; i < vecSize; i++) {
        std::cout << vec[i] << '\n';
    }
}

int main() {

    std::vector<std::string> myString;
    myString.push_back("New String 1");
    myString.push_back("New String 2");
    myString.push_back("New String 3");

    vec_loop(myString, myString.size());


    return 0;
}
