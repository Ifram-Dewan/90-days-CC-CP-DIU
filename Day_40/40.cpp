#include <iostream>
#include <cctype>
#include <string>

std::string correctLetterCase(const std::string& word) {
    int uppercaseCount = 0;
    int lowercaseCount = 0;

    // Count the number of uppercase and lowercase letters in the word
    for (char ch : word) {
        if (isupper(ch)) {
            uppercaseCount++;
        } else {
            lowercaseCount++;
        }
    }

    // If there are more uppercase letters, convert the word to uppercase
    if (uppercaseCount > lowercaseCount) {
        std::string correctedWord;
        for (char ch : word) {
            correctedWord += toupper(ch);
        }
        return correctedWord;
    }
    // If there are more lowercase letters or equal number of uppercase and lowercase letters, convert the word to lowercase
    else {
        std::string correctedWord;
        for (char ch : word) {
            correctedWord += tolower(ch);
        }
        return correctedWord;
    }
}

int main() {
    std::string word;
    std::cin >> word;
    std::string correctedWord = correctLetterCase(word);
    std::cout << correctedWord << std::endl;
    return 0;
}

