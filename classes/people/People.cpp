#include "People.h"
#include <iostream>

People::People(std::string n, int a) {
    name = n;
    age = a;
}

void People::setName(std::string n) {
    name = n;
}

void People::setAge(int a) {
    age = a;
}

void People::display() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
}