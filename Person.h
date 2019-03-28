//
// Created by Titkos on 28/03/2019.
//

#ifndef HACKATHON_VAUGHAN_PERSON_H
#define HACKATHON_VAUGHAN_PERSON_H

#include <string>
#include "Location.h"

class Person {
public:
    Person(const std::string &name, const std::string &number, County personLocation, int towerToPersonID);
    Person(const std::string &name);

    std::string makingACall(std::string input);
    std::string answeringACall(std::string input);

    const std::string &getName() const;
    void setName(const std::string &name);

    const std::string &getNumber() const;
    void setNumber(const std::string &number);

    std::string getPersonLocationString() const;
    void setPersonLocation(County personLocation);
    County getPersonLocation() const;

    const std::string &getPersonBuffer() const;
    void setPersonBuffer(const std::string &personBuffer);


protected:
    std::string name;
    std::string number;
    County personLocation;
    int towerToPersonID;
    std::string personBuffer;
};


#endif //HACKATHON_VAUGHAN_PERSON_H
