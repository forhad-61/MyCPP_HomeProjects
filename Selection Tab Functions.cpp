/* containing all the tab options */

// string lyrics
#include <iostream>
#include <string>

// random number
#include <cstdlib>
#include <ctime>

// display name buffer clear
#include <limits>

// sorting vector
#include <vector>
#include <algorithm>

void selection_tab() {
    std::cout << "=====================================" << std::endl;
    std::cout << "  a. play a song lyrics" << std::endl;
    std::cout << "  b. throw a random number" << std::endl;
    std::cout << "  c. enter your name & display it" << std::endl;
    std::cout << "  d. write some number & sort asc" << std::endl;
    std::cout << "  x. terminate the program!" << std::endl;
    std::cout << "=====================================" << std::endl << std::endl;
}

char get_input() {
    char latter;
    std::cin >> latter;
    return latter;
}


// show lyrics : 'a'
void lyrics() {
    std::cout << "\n         \"Close To The Sun\"\n";
    std::cout << "     ==========================" << std::endl;
    std::cout << "          Let's sing a song\n"
              << "      Full of hope, full of pain\n"
              << " Why don't you sing along, my friend?\n"
              << "      For it's our last refrain\n"
              << "           Forever young\n"
              << "      Ever strong, ever brave\n"
              << "    Memories like this never end\n"
              << "      No, they don't fade away\n" << std::endl;
}

// random number generator : 'b'
void random_num() {
    srand(time(0));
    int seed{};
    std::cout << "Here are some random number for you, enjoy! " << std::endl;
    while(seed < 5) {
        std::cout << rand() % 100 << std::endl;
        ++seed;
    }
    std::cout << std::endl;
}

// for clearing buffer
void ignore_line() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

// display name : 'c'
void display_string() {
    std::cout << "Enter your name here: ";
    std::string name;
//    getline(std::cin, name);
//    getline has some issue with input buffer so I have to remove it
    std::cin >> name;
    std::cout << "As your first name " << name << ", we'll consider that when addressing you. Hi "
              << name << ", have a good day! :)" << std::endl << std::endl;
    ignore_line();
}

// sorting user input : 'd'
void sort_num() {
    std::cout << "Enter some integer number(type - or 0 to exit): ";
    std::vector<int> my_vec;
    int x{};
    const int term{-0};
    while((std::cin >> x) && x != term) {
            my_vec.push_back(x);
    }

    std::sort(std::begin(my_vec), std::end(my_vec));
    std::cout << "You wrote so far: " << std::endl;
    unsigned int y{};
    while(y < my_vec.size()) {
        std::cout << "  " << my_vec[y] << std::endl;
        ++y;
    }
    std::cout << std::endl;
}
