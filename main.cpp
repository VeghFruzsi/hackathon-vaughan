#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>


#include "BaseStation.h"
#include "Person.h"
#include "Tower.h"

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

    Person person1("Arpad");
    Tower tower1;
    BaseStation base1;
    BaseStation base2;
    Tower tower2;
    Person person2("Éva");
    std::string input;

    std::cout << " mivan? " << std::endl;
    std::cin >> input;

    person1.makingACall(input);
    tower1.setTowerBuffer(input);
    tower1.callToBaseStation(tower1.getTowerBuffer());
    base1.setBaseStationBuffer(tower1.getTowerBuffer());
    base1.callToBaseStation(base1.getBaseStationBuffer());
    base2.setBaseStationBuffer(base1.getBaseStationBuffer());
    base2.callToTower(base2.getBaseStationBuffer());
    tower2.setTowerBuffer(base2.getBaseStationBuffer());

    std::cout << "the answered call contains: " << person2.answeringACall(tower2.getTowerBuffer()) << std::endl;


    std::cout << "Hello, World!" << std::endl;
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

        std::string phoneNumber;
        std::getline(stringStream, phoneNumber, ',');

        std::string place;
        std::getline(stringStream, place, ',');

        std::string country;
        std::getline(stringStream, country, ',');

    }
    file.close();
    return person;
}

