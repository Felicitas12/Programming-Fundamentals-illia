/**
* Done by:
 * Student Name: Illia Zhurbenko
 * Student Group: 121
 */

#include <iostream>
#include <string>

bool isValidLString(const std::string& str) {
    if (str.size() < 2 || str.front() != '{' || str.back() != '}') {
        return false;
    }

    for (size_t i = 1; i < str.size() - 1; ++i) {
        const char c = str[i];
        if (c == '{' || c == '}') {
            return false;
        }
    }

    return true;
}

int main() {
    std::string input;
    std::cout << "Введіть текст для перевірки: ";
    std::getline(std::cin, input);

    if (isValidLString(input)) {
        std::cout << input << " ∈ L(V)" << std::endl;
    } else {
        std::cout << input << " ∉ L(V)" << std::endl;
    }

    return 0;
}
