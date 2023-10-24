#include <iostream>
#include <set>
#include <sstream>

int main() {
    std::string input;
    getline(std::cin, input);

    std::set<char> distinctLetters;

    std::stringstream ss(input);
    char ch;
    while (ss >> ch) {
        if (isalpha(ch)) {
            distinctLetters.insert(ch);
        }
    }

    std::cout << distinctLetters.size() << std::endl;

    return 0;
}
