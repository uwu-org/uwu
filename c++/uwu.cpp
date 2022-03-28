#include <iostream>
#include <string>

std::string uwu(const std::string str) {
    std::string out = "";

    for (char chr : str) {
        if (chr == 'r' || chr == 'l')
            out += 'w';
        else
            out += chr;
    }

    return out;
}

int main(void) {
    std::string text;

    std::cout << "English: ";
    std::getline(std::cin, text);

    std::cout << uwu(text) << '\n';

    return 0;
}
