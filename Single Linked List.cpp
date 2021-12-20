#include <iostream>

#include "MyList.h"

int main()
{
    MyList<int> list;
    list.push_back(5);
    list.push_back(6);
    list.push_back(7);
    for (int i = 0; i < list.GetSize(); i++) {
        std::cout << list[i] << "\n";
    }
    std::cout << "Now we delete first element \n";
    list.pop_front();
    for (int i = 0; i < list.GetSize(); i++) {
        std::cout << list[i] << "\n";
    }
    std::cout << "Now we delete all elements \n";
    list.clear();
    std::cout << list.GetSize() << "\n";
    std::cout << "Now we insert 2 element in 1 place \n";
    list.insert(228, 0);
    list.insert(228, 1);
    std::cout << "Now we past a few elements \n";
    list.push_back(5);
    list.push_back(6);
    list.push_back(7);
    for (int i = 0; i < list.GetSize(); i++) {
        std::cout << "[" << i << "] " << list[i] << "\n";
    }
    std::cout << "Now we remove secont element \n";
    list.removeAt(1);
    for (int i = 0; i < list.GetSize(); i++) {
        std::cout << "[" << i << "] " << list[i] << "\n";
    }
    std::cout << "Now we call pop_back method \n";
    list.pop_back();
    for (int i = 0; i < list.GetSize(); i++) {
        std::cout << "[" << i << "] " << list[i] << "\n";
    }
}
