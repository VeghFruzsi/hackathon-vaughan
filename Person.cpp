#include "Person.h"

Person::Person(const std::string &name) : name(name) {}

Person::Person(const std::string &name, const std::string &number, County personLocation, int towerToPersonID) : name(
        name), number(number), personLocation(personLocation), towerToPersonID(towerToPersonID) {}

const std::string &Person::getName() const {
    return name;
}

void Person::setName(const std::string &name) {
    Person::name = name;
}

std::string Person::makingACall(std::string input) {
    return std::__cxx11::string();
}

std::string Person::answeringACall(std::string input) {
    return std::__cxx11::string();
}

std::string Person::getPersonLocationString() const {
    std::string location;
    switch
            (personLocation) {
        case County::INVALID:
            location = "Invalid";
            break;
        case County::BEKESCSABA :
            location = "Bekescsaba";
            break;
        case County::BUDAPEST :
            location = "Budapest";
            break;
        case County::DEBRECEN :
            location = "Debrecen";
            break;
        case County::SZOMBATHELY :
            location = "Szombathely";
            break;
        case County::GYOR :
            location = "Gyor";
            break;
        case County::ZALAEGERSZEG :
            location = "Zalaegerszeg";
            break;
        case County::VESZPREM:
            location = "Veszprem";
            break;
        case County::KAPOSVAR :
            location = "Kaposvar";
            break;
        case County::PECS :
            location = "Pecs";
            break;
        case County::SZEKSZARD:
            location = "Szekszard";
            break;
        case County::SZEKESFEHERVAR:
            location = "Szekesfehervar";
            break;
        case County::TATABANYA :
            location = "Tatabanya";
            break;
        case County::KECSKEMET :
            location = "Kecskemet";
            break;
        case County::SZEGED:
            location = "Szeged";
            break;
        case County::SZOLNOK :
            location = "Szolnok";
            break;
        case County::SALGOTARJAN:
            location = "Salgotarjan";
            break;
        case County::EGER :
            location = "Eger";
            break;
        case County::NYIREGYHAZA :
            location = "Nyiregyhaza";
            break;
        case County::MISKOLC :
            location = "Miskolc";
            break;
    }
    return location;
}

void Person::setPersonLocation(County personLocation) {
    Person::personLocation = personLocation;
}

const std::string &Person::getNumber() const
{
    return number;
}

void Person::setNumber(const std::string &number)
{
    Person::number = number;
}

const std::string &Person::getPersonBuffer() const {
    return personBuffer;
}

void Person::setPersonBuffer(const std::string &personBuffer) {
    Person::personBuffer = personBuffer;
}

County Person::getPersonLocation() const {
    return personLocation;
}

Person::Person() {}
