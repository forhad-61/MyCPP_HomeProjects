#include <iostream>
#include <string>
using std::endl;

class Fruit_bucket {
private:
    int number_of_orange{};
    int number_of_banana{};
    int number_of_mango{};

public:
    Fruit_bucket(int orange = 0, int banana = 0, int mango = 0){
        number_of_orange = orange;
        number_of_banana = banana;
        number_of_mango = mango;
    }

    int get_orange() {
        return number_of_mango;
    }
};

int main(){

    Fruit_bucket Clara_bucket{1, 4};
    std::cout << Clara_bucket.get_orange();


    return 0;
}
