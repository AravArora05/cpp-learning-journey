#ifndef __DOG_H__
#define __DOG_H__
#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;
public:

void multiply_with_pointer(int* ptr, int multiplier) {
    *ptr *= multiplier;
}

string get_name() {
    return name;
}

int get_age() {
    return age;
}

void set_name(string phrase) {
    name = phrase;
}

void set_age(int number) {
    age = number;
}

};
#endif 
