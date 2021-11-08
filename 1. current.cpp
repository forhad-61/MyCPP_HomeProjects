#include <iostream>
#include <string>
#include <vector>

void show_info() {
    std::cout << "\nPress 1 to add number" << std::endl;
    std::cout << "Press 2 to show the list." << std::endl;
    std::cout << "Press 3 to show terminate.\n" << std::endl;
}

// add an element into the vector
std::vector<int> add_elem(std::vector<int> &num) {
    std::cout << "Please add a number: ";
    int get_num;
    std::cin >> get_num;

    num.push_back(get_num);
    std::cout << '\n' << get_num << " added successfully!\n";
    return num;
}

// loop and show the element list
void show_elem(std::vector<int> &my_num) {
    int x = my_num.size();
    unsigned int y = static_cast<unsigned int>(x); // x needs to be casted otherwise the for() loop doesn't work
    std::cout << "Total number added: " << x << std::endl;

    for(unsigned int i{}; i < y; i++) { // i needs to be unsigned otherwise the loop doesn't iterate the vector
        std::cout << my_num[i] << std::endl;
    }
}

int main() {

    std::cout << "=============== Welcome to .push_back()! ===============" << std::endl;
    std::vector<int> my_num;

    take:
    show_info();
    int get_num;
    std::cin >> get_num;

    switch(get_num) {
    case 1:
        add_elem(my_num);
        goto take;
    case 2:
        show_elem(my_num);
        goto take;
    case 3:
        std::cout << "~~ Goodbye! ~~\n";
        break;
    default:
        std::cout << "error: no valid argument! :/" << std::endl;
        goto take;
    }

    return 0;
}
