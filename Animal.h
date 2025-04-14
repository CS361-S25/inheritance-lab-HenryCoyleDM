#include <string>
#ifndef ANIMAL
#define ANIMAL


class Animal {
    int age;

    public:
    Animal(int _age) : age(_age) {

    }

    public:
    virtual std::string GetType() {
        return "Animal";
    }

    public:
    virtual int GetAge() {
        return age;
    }

    public:
    virtual emp::Ptr<Animal> Reproduce() {
        return new Animal(0);
    }
};

#endif