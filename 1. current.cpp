#include <iostream>
#include <string>
#include <vector>

class User {
    public:
    std::string first_name{};
    std::string last_name{};
};

int add_new(std::vector<User>, User user) {
    for()
    if()

}

int main() {

    User billy;
    User kelly;
    User milly;

    billy.first_name = "Billy";
    billy.last_name = "Margaret";

    kelly.first_name = "Kelly";
    kelly.last_name = "Abraham";

    milly.first_name = "Milly";
    milly.last_name = "Jhonson";

    std::vector<User> userVec;
    userVec.push_back(billy);
    userVec.push_back(kelly);
    userVec.push_back(milly);

    add_new(userVec, milly);

    return 0;
}
