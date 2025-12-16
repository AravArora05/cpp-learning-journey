#include <iostream>

int main()
{
    int small_rooms;
    int large_rooms;

    const int price_small = 25;
    const int price_large = 35;

    std::cout << "Welcome to Arav's cleaning room service\n" << std::endl;

    std::cout << "How many small rooms would you like cleaned? ";
    std::cin >> small_rooms;

    std::cout << "How many large rooms would you like cleaned? ";
    std::cin >> large_rooms;

    std::cout << "\nEstimate for carpet cleaning service" << std::endl;

    std::cout << "Number of small rooms: " << small_rooms << std::endl;
    std::cout << "Number of large rooms: " << large_rooms << std::endl;

    std::cout << "Price per small room: $" << price_small << std::endl;
    std::cout << "Price per large room: $" << price_large << std::endl;

    return 0;
}
