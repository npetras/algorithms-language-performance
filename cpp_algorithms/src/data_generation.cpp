#include <vector>

std::vector<int> generateSequentialIntVector(int size)
{
    std::vector<int> vector(size);
    for (size_t i = 0; i < size; ++i)
    {
        vector.at(i) = i + 1;
    }
    return vector;
}
