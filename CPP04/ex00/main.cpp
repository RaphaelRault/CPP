/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrault <rrault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:10:05 by rrault            #+#    #+#             */
/*   Updated: 2024/04/15 14:04:20 by rrault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void )
{
    std::cout << "--------------- Animal ---------------" << std::endl;

    const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();

    std::cout << "meta Type: " << meta->getType() << " " << std::endl;
    std::cout << "I Type: " << i->getType() << " " << std::endl;
    std::cout << "J Type: " << j->getType() << " " << std::endl;

    meta->makeSound();
    i->makeSound();
    j->makeSound();


    delete  j;
    delete  i;
    delete  meta;

    std::cout << std::endl << "------------- Wrong Animal -------------" << std::endl;

    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "Wrong Type: " << wrong->getType() << " " << std::endl;
    std::cout << "WrongCat Type: " << wrongCat->getType() << " " << std::endl;
    wrong->makeSound();
    wrongCat->makeSound();

    delete  wrongCat;
    delete  wrong;

    return 0;
}
