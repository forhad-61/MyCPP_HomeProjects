#include <iostream>

// Get flavor name
char getFlavor() {
	std::cout << "Which flavor would you like?\n";
	std::cout << "a. Vanilla\n";
	std::cout << "b. Strawberry\n";

	char flavorValue;
	std::cin >> flavorValue;
	return flavorValue;
}

// Get scoop amount
int getScoop() {
    std::cout << "\nHow many scoop do you want in your icecream?\n"; // Replace icecream with flavor name

    int scoopValue;
    std::cin >> scoopValue;

    // Check if the user enters more than 7 scoop
    while(true) {
        if(scoopValue > 7) {
            std::cout << "Oops! You can have up to 7 scoop, buddy. Much scoop will melt your icecream :v\n"; // Replace icecream with flavor name
            std::cin >> scoopValue;
        } else {
            return scoopValue;
        }
    }
}

// Get sweet permission
char getSweet() {
    std::cout << "\nDo you want sweets particle at top of your scoops? [y/n]\n";

    char sweetValue;
    std::cin >> sweetValue;

    if(sweetValue == 'y') {
        std::cout << "Okay, as you wish\n";
    } else {
        std::cout << "Maybe you didn't find a good taste on them. No problem :) \n";
    }

    return sweetValue;
}

int main() {
    system("title IceCream Maker! - Make your Own IceCream");

	std::cout << "==========================================\n";
	std::cout << "        Welcome to IceCream Maker!\n";
	std::cout << "==========================================\n\n";

	char flavor{getFlavor()};
    int scoop{getScoop()};
    char sweet{getSweet()};



    std::cout << "\nFlavor " << flavor
              << "\nScoop amount " << scoop
              << "\nSweet? " << sweet << '\n';

	return 0;
}
