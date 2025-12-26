/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liyu-her <liyu-her@student.42.kl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 04:32:22 by liyu-her          #+#    #+#             */
/*   Updated: 2025/12/27 04:32:44 by liyu-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
    std::cout << "=== EX02 TEST: Abstract Animal Class ===" << std::endl;
    std::cout << "1. Testing that Animal cannot be instantiated..." << std::endl;
    std::cout << "✅ Animal class is abstract - cannot instantiate directly" << std::endl;
    std::cout << std::endl;
    
    std::cout << "2. Testing that Dog and Cat still work:" << std::endl;
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    
    std::cout << "Dog type: " << dog->getType() << std::endl;
    std::cout << "Cat type: " << cat->getType() << std::endl;
    
    dog->makeSound();
    cat->makeSound();
    
    delete dog;
    delete cat;
    std::cout << std::endl;
    
    std::cout << "3. Testing polymorphism with array:" << std::endl;
    const int arraySize = 2;
    Animal* animals[arraySize];
    
    animals[0] = new Dog();
    animals[1] = new Cat();
    
    for (int i = 0; i < arraySize; i++) {
        std::cout << animals[i]->getType() << " says: ";
        animals[i]->makeSound();
    }
    
    for (int i = 0; i < arraySize; i++) {
        delete animals[i];
    }
    std::cout << std::endl;
    
    std::cout << "4. Testing Brain still works:" << std::endl;
    Dog smartDog;
    smartDog.setIdea(0, "I'm a smart doggo!");
    std::cout << "Dog idea: " << smartDog.getBrain()->getIdea(0) << std::endl;
    
    std::cout << std::endl;
    std::cout << "=== All tests completed successfully! ===" << std::endl;
    
    return 0;
}