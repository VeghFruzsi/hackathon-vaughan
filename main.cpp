#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>


#include "BaseStation.h"
#include "Person.h"
#include "Tower.h"
#include "Location.h"

std::vector<Person> readFromFile(std::string fileName);

int main() {

    try {
        std::vector<Person> person = readFromFile("../person.txt");

    } catch (int e) {
        if (e == 2) {
            std::cout << "person.txt could not be opened" << std::endl;
            return 2;
        }
    }

    Tower tower1;
    tower1.setTowerLocation(County::GYOR);
    Person person1("Nrtkh");
    person1.setPersonLocation(County::GYOR);

    if(person1.getPersonLocation() == tower1.getTowerLocation()){
        std::cout << "jeeeejejejejjeeee" << std::endl;
    }

    return 0;
}

std::vector<Person> readFromFile(std::string fileName){
    std::vector<Person> person;
    std::ifstream file(fileName);
    if (file.is_open()) {
        std::cout << "Open\n" << std::endl;
    } else {
        std::cout << "Your file is closed" << std::endl;
        throw 2;
    }

    std::string line;
    while (std::getline(file, line)) {

        std::istringstream stringStream(line);

        std::string name;
        std::getline(stringStream, name, ',');

        Person person1(name);

        std::string phoneNumber;
        std::getline(stringStream, phoneNumber, ',');
        person1.setNumber(phoneNumber);

        std::string place;
        std::getline(stringStream, place, ',');

        std::string county;
        std::getline(stringStream, county, ',');

        if(county == "Szombathely"){
            person1.setPersonLocation(County::SZOMBATHELY);
        } else if(county == "Gyor"){
            person1.setPersonLocation(County::GYOR);
        } else if(county == "Zalaegerszeg"){
            person1.setPersonLocation(County::ZALAEGERSZEG);
        } else if(county == "Veszprem"){
            person1.setPersonLocation(County::VESZPREM);
        } else if(county == "Kaposvar"){
            person1.setPersonLocation(County::KAPOSVAR);
        } else if(county == "Pecs"){
            person1.setPersonLocation(County::PECS);
        } else if(county == "Szekszard"){
            person1.setPersonLocation(County::SZEKSZARD);
        } else if(county == "Szekesfehervar"){
            person1.setPersonLocation(County::SZEKESFEHERVAR);
        } else if(county == "Tatabanya"){
            person1.setPersonLocation(County::TATABANYA);
        } else if(county == "Budapest"){
            person1.setPersonLocation(County::BUDAPEST);
        } else if(county == "Kecskemet"){
            person1.setPersonLocation(County::KECSKEMET);
        } else if(county == "Szeged"){
            person1.setPersonLocation(County::SZEGED);
        } else if(county == "Szolnok"){
            person1.setPersonLocation(County::SZOLNOK);
        } else if(county == "Salgotarjan"){
            person1.setPersonLocation(County::SALGOTARJAN);
        } else if(county == "Eger"){
            person1.setPersonLocation(County::EGER);
        } else if(county == "Bekescsaba"){
            person1.setPersonLocation(County::BEKESCSABA);
        } else if(county == "Debrecen"){
            person1.setPersonLocation(County::DEBRECEN);
        } else if(county == "Nyiregyhaza"){
            person1.setPersonLocation(County::NYIREGYHAZA);
        } else if(county == "Miskolc"){
            person1.setPersonLocation(County::MISKOLC);
        } else{
            person1.setPersonLocation(County::INVALID);
        }

        person.push_back(person1);

    }

    for (int i = 0; i <person.size() ; ++i) {
        std::cout << i << ":" << person[i].getName() << ", " << person[i].getNumber() << ", "  << std::endl;
    }

    file.close();
    return person;
}
