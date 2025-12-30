class Dog {
public:
    std::string name;
    int age;
};

Dog test_dog() {
    Dog spot;
    spot.name="Spot";
    spot.age=5;
    return spot;
}
