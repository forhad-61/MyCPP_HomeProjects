#include <iostream>
#include <vector>

void loop(std::vector<int> &mys) {
    int counts = mys.size();
    unsigned int x = static_cast<unsigned int>(counts);

    for(unsigned i{}; i < x; i++) {
        std::cout << mys[i] << std::endl;
    }
}

int main() {

    std::vector<int> mys{1, 2, 3, 4, 5};
    loop(mys);

    return 0;
}
