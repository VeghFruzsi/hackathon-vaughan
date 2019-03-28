//
// Created by Titkos on 28/03/2019.
//

#include "Person.h"

Person::Person(const std::string &name) : name(name) {}

Person::Person(const std::string &name, const std::string &number, PersonLocation personLocation, int towerToPersonID)
        : name(
        name), number(number), personLocation(personLocation), towerToPersonID(towerToPersonID) {}

const std::string &Person::getName() const {
    return name;
}

void Person::setName(const std::string &name) {
    Person::name = name;
}

std::string Person::makingACall(std::string input) {
    return input;
}

std::string Person::answeringACall(std::string input) {
    return input;
}
