#include <iostream>
#include <string>
using std::endl;

class Employee {
private:
    std::string name{};
    char grade{};
    int employee_id{};
    double salary{};
    std::string title{};

public:
    Employee(std::string obj_name, char obj_grade, int obj_id, double obj_salary, std::string obj_title) {
        name = obj_name;
        grade = obj_grade;
        employee_id = obj_id;
        salary = obj_salary;
        title = obj_title;
    }

    void job_desc() {
        std::cout << name << " is a " << title << " in X Company.";
    }
};

int main(){

    Employee Jhonson { "Peter Jhonson", 'S', 505, 3000, "Senior Sales Representative" };
    Jhonson.job_desc();

    return 0;
}
