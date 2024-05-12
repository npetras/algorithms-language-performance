#include "search.hpp"

// TODO: includes? vector twice or once?
// type in Header file?
#include <vector>
#include <ranges>

int basicLinearSearch(int searchItem, std::vector<int> inputList) {
    int size = inputList.size();
    for (auto [index, item] : std::ranges::views::enumerate(inputList)) {
        if (item == searchItem) {
            return index;
        }
    }
}
