void can_you_drive(int age, bool has_car) {
    const int driving_age {16};

    if (age >= driving_age) {
        if (!has_car) {
            std::cout << "Sorry, you need to buy a car before you can drive!";
        } else {
            std::cout << "Yes - you can drive!";
        }
    } else {
        std::cout << "Sorry, come back in "
                  << (driving_age - age)
                  << " years and be sure you own a car when you come back.";
    }
}
