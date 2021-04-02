/*
THIS IS THE DRAFT PART OF THE FINISHED PROGRAM 
*/

#include <iostream>

void getWidth() {
    std::cout << "Enter a width " << '\n';
    int widthValue{};
    std::cin >> widthValue;
}

// same for getHeight

int calculateArea(int width, int height) {
    double areaValue{};
    areaValue = 1/2 * width * height; // putting 1/2 returns 0. You'll have to use 1.0/2
    return areaValue; // or do - return areaValue = 1/2 * width * height
}

int main() {
    int width{getWidth()};
    int height{getWidth()};
    int hypotenuse{} // create a function like getWidth() for hypotenuse

    if((width + height) < hypotenuse) {
        std::cout << "Sorry, not possible" << '\n';
    } else if((width + height) > hypotenuse) {
        std::cout << "Yes, possible" << '\n';
        std::cout << calculateArea();
    } else {
        std::cout << "Sorry, something went wrong" << '\n';
    }

    return 0;
} 
