#include<iostream>
#include<string>

class Lab_inv{
private:
    char m_poison_spell{};
    char m_haste_spell{};
    char m_invisibility_spell{};

public:
    Lab_inv(char poison, char haste, char invisibility) : m_poison_spell{poison}, m_haste_spell{haste}, m_invisibility_spell{invisibility} {
        std::cout << "Poison code: " << m_poison_spell << std::endl;
        std::cout << "Haste code: " << m_haste_spell << std::endl;
        std::cout << "Invisibility code: " << m_invisibility_spell << std::endl;
    }
};

int main() {

    Lab_inv julie_inv{'P', 'H', 'I' };

    return 0;
}
