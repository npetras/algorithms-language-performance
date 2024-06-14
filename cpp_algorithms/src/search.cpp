#include "search.hpp"

#include <vector>
#include <ranges>

/**
 * @brief Linear search over a int vector
 *
 * @param searchItem the item to search/find
 * @param input vector/list to search
 * @return int the index of the searchItem in the input
 */
int basicLinearSearch(int searchItem, std::vector<int> input)
{
    size_t size = input.size();
    for (auto [index, item] : std::ranges::views::enumerate(input))
    {
        if (item == searchItem)
        {
            return index;
        }
    }
    return -1;
}
