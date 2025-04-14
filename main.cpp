
#include "emp/base/vector.hpp"
#include "emp/base/Ptr.hpp"
#include <ostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"


int main() {
    
    emp::vector<emp::Ptr<Animal>> population;
    population.push_back(new Dog(5, 2));
    std::cout << population[0]->GetType() << std::endl;
    std::cout << population[0]->GetAge() << std::endl;
    Animal test = *population[0];
    std::cout << test.GetType() << std::endl;
    std::cout << test.GetAge() << std::endl;
    population.push_back(population[0]->Reproduce());
    std::cout << population[1]->GetType() << std::endl;
    std::cout << population[0].DynamicCast<Dog>()->GetSpots() << std::endl;
    std::cout << population[1].DynamicCast<Dog>()->GetSpots() << std::endl;
    population.push_back(new Cat(8, 4));
    std::cout << population[2]->GetType() << std::endl;
}
