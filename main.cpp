// Writing a Triangle Making Calculations
#include <iostream>

// Get the triangle's width from user
int getWidth() {
    std::cout << "Enter a width ";
    int widthValue{};
    std::cin >> widthValue;
    return widthValue;
}

// Get height from user
int getHeight() {
    std::cout << "Enter a height ";
    int heightValue{};
    std::cin >> heightValue;
    return heightValue;

}

// Also get the hypotenuse
int getHypotenuse() {
    std::cout << "Enter a hypotenuse ";
    int hypotenuseValue{};
    std::cin >> hypotenuseValue;
    return hypotenuseValue;
}

// function to calculate with 1/2 * w * h formula
int calculateArea(int width, int height) {
    double areaValue{};
    areaValue = 1.0/2 * width * height;
    std::cout << "The area of your triangle will be " << areaValue << '\n';
    return areaValue;
}

int main() {

    std::cout << "Enter a width, height & hypotenuse to see if you can make a triangle with them! \n";
    std::cout << "=============================================================================== \n\n";

    int width{getWidth()};
    int height{getHeight()};
    int hypotenuse{getHypotenuse()};

    if((width + height) < hypotenuse) {
        std::cout << "\nSorry, you can't :/ \nYour width & height must have to be greater than your hypotenuse!" << '\n';
    } else if((width + height) > hypotenuse) {
        std::cout << "\nCool! You can make a triangle from these length." << '\n';
        calculateArea(width, height);
    } else if((width + height) == hypotenuse) {
        std::cout << "\nHumm, width & height's summation can't be equal to hypotenuse" << '\n';
    } else {
        std::cout << "\nSorry, something went wrong :(" << '\n';
    }

    return 0;
}
