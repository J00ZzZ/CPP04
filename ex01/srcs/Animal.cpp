/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liyu-her <liyu-her@student.42.kl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 04:31:03 by liyu-her          #+#    #+#             */
/*   Updated: 2025/12/27 04:31:04 by liyu-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : _type(other._type) {
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)  {
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &other) {
        _type = other._type;
    }
    return *this;
}

Animal::~Animal() {
     std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Normal Animal Sound" << std::endl;
}

std::string Animal::getType() const {
    return _type;
}

