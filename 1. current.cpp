#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> item_list {"sword", "knife", "apple", "metal shard", "coal", "ruby stone" };
    //std::cout << "Your 5th item is: " << item_list[5] << std::endl;
    //item_list.push_back("copper");
    //std::cout << "Last item is: " << item_list.back();

    std::cout << "Current total item: " << item_list.size() << std::endl;

    std::cout << "Enter a desired item to add in your inventory: ";
    std::string new_item;
    std::cin >> new_item;
    item_list.push_back(new_item);

    std::cout << "Your newly added last element is: " << item_list.back() << std::endl;
    std::cout << "Total item number is: " << item_list.size();


	return 0;
}
