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

    Person(const std::string &name, const std::string &number, Location personLocation, int towerToPersonID);

    Person(const std::string &name);

    std::string makingACall(std::string input);

    std::string answeringACall(std::string input);

protected:
    std::string name;
    std::string number;
    Location personLocation;
public:
    Location getPersonLocation() const;

    void setPersonLocation(Location personLocation);

protected:
    int towerToPersonID;

};


#endif //HACKATHON_VAUGHAN_PERSON_H
