#include <iostream>
#include <string>
using std::endl;

class Employee {
public:
    std::string name{};
    char grade{};
    int employee_id{};
    double salary{};
    std::string title{};

    void job_desc(std::string title) {
        std::cout << name << " is a " << title << " in X Company.";
    }
};

int main(){

    Employee Jhonson { "Peter Jhonson", 'S', 505, 3000, "Senior Sales Representative" };
    Jhonson.job_desc(Jhonson.title);

    return 0;
}
