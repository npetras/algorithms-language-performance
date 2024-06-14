#include <iostream>
#include "data_generation.hpp"
#include "search.hpp"

int main(int argc, char *argv[])
{
    std::cout << "Hello world!" << std::endl;
    std::vector<int> input = generateSequentialIntVector(1000000);
    int item = basicLinearSearch(1000000, input);
    std::cout << "Item: " << item << std::endl;
}
