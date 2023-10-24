
#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string firstString, secondString;
    std::cin >> firstString >> secondString;

    // Convert both strings to lowercase for case-insensitive comparison
    std::transform(firstString.begin(), firstString.end(), firstString.begin(), ::tolower);
    std::transform(secondString.begin(), secondString.end(), secondString.begin(), ::tolower);

    // Compare the strings lexicographically and output the result
    if (firstString < secondString) {
        std::cout << "-1" << std::endl;
    } else if (firstString > secondString) {
        std::cout << "1" << std::endl;
    } else {
        std::cout << "0" << std::endl;
    }

    return 0;
}
