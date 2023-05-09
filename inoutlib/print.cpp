#include <iostream>
#include <vector>

void print(const std::vector<int>& numbers)
{
    for (auto number : numbers)
    {
        std::cout << number << " ";
    }
}