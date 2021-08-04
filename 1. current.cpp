#include <iostream>
#include <vector>

void printVec(std::vector<int> pVec, int v) {
    for(int i = 0; i < v; i++) {
        std::cout << pVec.push_back(i);
    }

}

int main() {

    std::vector<int> newVector {1, 2, 3};

    int x;
    std::cout << "Enter a num: ";
    std::cin >> x;
    newVector.push_back(x);

    std::cout << "\nnewVector size() - 1: " << newVector.size();

    printVec(newVector, newVector.size());

    return 0;
}
