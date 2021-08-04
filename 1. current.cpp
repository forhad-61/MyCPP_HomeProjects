#include <iostream>
#include <string>
#include <vector>

class User {
    public:
    std::string first_name{};
    std::string last_name{};
};



int main() {

    User billy;
    billy.first_name = "Billy";
    billy.last_name = "Margaret";

    std::cout << billy.first_name;

    return 0;
}
