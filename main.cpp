#include <iostream>

#include "BaseStation.h"
#include "Person.h"
#include "Tower.h"

int main() {

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