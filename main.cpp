#include <iostream>
#include <vector>
#include <algorithm>

#include "inoutlib/inout.hpp"

int main()
{
    std::vector<int> numbers;
    std::size_t count;

    std::cin >> count;
    read(numbers, count);
    std::sort(numbers.begin(), numbers.end());
    print(numbers);
    return 0;
}