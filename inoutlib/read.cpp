#include <iostream>
#include <vector>

void read(std::vector<int>& numbers, std::size_t numbersCount)
{
    for (std::size_t i = 0; i < numbersCount; i++)
    {
        int number;
        std::cin >> number;
        numbers.emplace_back(number);
    }
}