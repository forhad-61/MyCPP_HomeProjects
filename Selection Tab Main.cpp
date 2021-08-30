#include "io.h"
#include <iostream>

int main() {

    std::cout << "=================================================" << std::endl;
    std::cout << "=========== Welcome to Selection Tab! ===========" << std::endl;
    std::cout << "=================================================" << std::endl << std::endl;

    std::cout << "Selection an option below by using the characters before them or press 'x' to terminate the program at anytime!" << std::endl << std::endl;

    selection:
    selection_tab();

    switch(get_input()) {
case 'a':
    lyrics();
    goto selection;
    break;
case 'b':
    random_num();
    goto selection;
    break;
case 'c':
    display_string();
    goto selection;
    break;
case 'd':
    sort_num();
    goto selection;
    break;
case 'x':
    std::cout << "Program terminated successfully!\n";
    break;
default:
    std::cout << "Error. Something went wrong! Please restart the program.\n";
    break;
    }

    return 0;
}
