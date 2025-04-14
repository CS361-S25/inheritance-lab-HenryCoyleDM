# include "Animal.h"
# include "emp/base/Ptr.hpp" // Include the header defining emp::Ptr

class Dog : public Animal {
    int num_spots;

    public:
    Dog(int _age, int _num_spots) : Animal(_age), num_spots(_num_spots) {
        
    }

    public:
    std::string GetType() {
        return "Dog";
    }

    public:
    int GetAge() {
        return Animal::GetAge() * 7;
    }

    public:
    int GetSpots() {
        return num_spots;
    }

    public:
    emp::Ptr<Animal> Reproduce() {
        return new Dog(0, GetSpots());
    }
};