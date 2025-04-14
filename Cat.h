# include "Animal.h"
# include "emp/base/Ptr.hpp" // Include the header defining emp::Ptr

class Cat : public Animal {
    int num_lives;

    public:
    Cat(int _age, int _num_lives) : Animal(_age), num_lives(_num_lives) {
        
    }

    public:
    std::string GetType() {
        return "Cat";
    }

    public:
    int GetAge() {
        return Animal::GetAge() * 7;
    }

    public:
    int GetLives() {
        return num_lives;
    }

    public:
    emp::Ptr<Animal> Reproduce() {
        return new Cat(0, 9);
    }
};