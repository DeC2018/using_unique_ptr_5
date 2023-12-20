#include <iostream>
#include <memory>

int main()
{
    auto ptr { std::make_unique<int>(123) };

    std::cout << "Old address: " << ptr.get() << std::endl;
    std::cout << "Old value: " << *ptr << std::endl;
    // free up memory and delete the array
    ptr.reset(new int{254});

    std::cout << "New address: " << ptr.get() << std::endl;
    std::cout << "New value: " << *ptr << std::endl;
}
