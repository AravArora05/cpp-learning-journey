#include <string>

 class Animal {
public:
    Animal(std::string name, int age)
        : name{name}, age{age} {}

    virtual std::string get_noise() = 0;
    virtual int get_num_legs() = 0;
    virtual ~Animal() = default;

protected:
    std::string name;
    int age;
};

class Dog : public Animal {
public:
    Dog(std::string name, int age)
        : Animal(name, age) {}

    std::string get_noise() override {
        return "Woof";
    }

    int get_num_legs() override {
        return 4;
    }
};
