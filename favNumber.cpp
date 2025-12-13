#include <iostream>

int main() {
    int favorite;

    std::cout << "What's your favorite number? ";
    std::cin >> favorite;

    std::cout << "Hey, " << favorite << " is my favorite chocolate too!" << std::endl;
    std::cout << "No, really " << favorite << " — that's my favorite number too!" << std::endl;

    return 0;
}
