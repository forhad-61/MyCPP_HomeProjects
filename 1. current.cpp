#include <iostream>
#include <algorithm>
#include <vector>

int main() {

    std::vector<int> my_vec {5, 7, 9, 78, 46, 637, 81, 01, 3, 46, 12, 35, 11, 50, 202};
    std::sort(std::begin(my_vec), std::end(my_vec));
    unsigned int x{};
    while(x < my_vec.size()) {
        std::cout << my_vec[x] << std::endl;
        ++x;
    }

    return 0;
}
