// 07.11.2025
// TASK - 01

// Write a function which converts the input string to uppercase.

// LINK - https://www.codewars.com/kata/57a0556c7cb1f31ab3000ad7

#include <iostream>
#include <string>
#include <cctype>

std::string makeUpperCase(const std::string& str) {
    std::string result;
    result.reserve(str.size());
    for (char c : str) {
        result += static_cast<char>(std::toupper(static_cast<unsigned char>(c)));
    }
    return result;
}

int main() {
    std::cout << makeUpperCase("hello") << std::endl;        // HELLO
    std::cout << makeUpperCase("WorLd!") << std::endl;       // WORLD!
    std::cout << makeUpperCase("C++17") << std::endl;        // C++17
    std::cout << makeUpperCase("") << std::endl;             // (Empty string)
    return 0;
}
