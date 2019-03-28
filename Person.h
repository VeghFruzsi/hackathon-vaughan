//
// Created by Titkos on 28/03/2019.
//

#ifndef HACKATHON_VAUGHAN_PERSON_H
#define HACKATHON_VAUGHAN_PERSON_H

#include <string>
#include "Location.h"

class Person {
public:
    const std::string &getName() const;

    void setName(const std::string &name);

    Person(const std::string &name, const std::string &number, County personLocation, int towerToPersonID);

    Person(const std::string &name);

    std::string makingACall(std::string input);

    std::string answeringACall(std::string input);

protected:
    std::string name;
    std::string number;
public:
    const std::string &getNumber() const;

    void setNumber(const std::string &number);

protected:
    County personLocation;
public:
    County getPersonLocation() const;

    void setPersonLocation(County personLocation);

protected:
    int towerToPersonID;

};


#endif //HACKATHON_VAUGHAN_PERSON_H
