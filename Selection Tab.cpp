#include <iostream>
#include <string>

void selection_tab() {
    std::cout << "a. play a song lyrics" << std::endl;
    std::cout << "b. throw a random number" << std::endl;
    std::cout << "c. enter your name & display it" << std::endl;
    std::cout << "d. write some number & sort them asc order" << std::endl;
    std::cout << "x. terminate the program!" << std::endl << std::endl;
}

char get_input() {
    char latter;
    std::cin >> latter;
    return latter;
}

int main() {

    std::cout << "=================================================" << std::endl;
    std::cout << "=========== Welcome to Selection Tab! ===========" << std::endl;
    std::cout << "=================================================" << std::endl << std::endl;

    std::cout << "Selection one option below by using the characters before them or press 'x' to terminate the program at anytime!" << std::endl << std::endl;
    selection_tab();


    switch(get_input()) {
case 'a':
    std::cout << "\n         \"Close To The Sun\"\n";
    std::cout << "     ==========================" << std::endl;
    std::cout << "          Let's sing a song\n"
              << "      Full of hope, full of pain\n"
              << " Why don't you sing along, my friend?\n"
              << "      For it's our last refrain\n"
              << "          Forever young\n"
              << "      Ever strong, ever brave\n"
              << "    Memories like this never end\n"
              << "      No, they don't fade away\n" << std::endl;
              selection_tab();
              get_input(); 
              break; // terminates after taking input 
case 'b':
    std::cout << "now in b";
    break;
    }

    return 0;
}
