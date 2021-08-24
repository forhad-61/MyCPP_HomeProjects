#include <iostream>
#include <string>
using std::endl;

class Food_maker{
private:
    char m_cake_maker;
    char m_blender;
    char m_water_filter;
    int m_number_of_serve;

public:
    Food_maker(char cake, char blender, char filter, int total) :
    m_cake_maker{cake},
    m_blender{blender},
    m_water_filter{filter},
    m_number_of_serve{total} {

    }

    int getTotal() {
        return m_number_of_serve;
    }

    char getCake() { 
        // remember to put the data type of the function. 
        // Otherwise it prints the ascii value of char (67). 
        // Putting no data type shows no complain from the compiler. 
        return m_cake_maker;
    }
};

int main(){

    Food_maker Burger_home('C', 'B', 'F', 3);
    std::cout << Burger_home.getTotal() << std::endl;
    std::cout << Burger_home.getCake();

    return 0;
}
