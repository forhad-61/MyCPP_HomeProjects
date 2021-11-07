#include<iostream>
#include<string>
#include<vector>

void loop(std::vector<int> &mys) {
    std::cout << "\nHere's what you have typed so far - " << std::endl;
    unsigned int x = mys.size();
    for(unsigned int i{}; i < x; i++) {
        std::cout << mys[i] << std::endl;
    }
}

int main() {

    std::cout << "Welcome! Type numbers with space, 0 to exit." << std::endl;
    std::vector<int> mys{};

    int input{1};
    while(input != 0) {
        std::cin >> input;
        mys.push_back(input);
        if(input == 0) {
            loop(mys);
        }
    }

    return 0;
}
