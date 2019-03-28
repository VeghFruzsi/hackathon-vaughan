#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

#include "BaseStation.h"
#include "Person.h"
#include "Tower.h"
#include "Location.h"
#include "ReadFromFile.h"

int main() {

    std::vector<Person> person = readFromPersonFile("../person.txt");
    std::vector<Tower> towerVector = readFromTowerFile("../tower.txt");

    int randomCallerIndex;
    int randomRecipientIndex;
    randomCallerIndex = static_cast<int>(rand() % person.size() + 1);
    AGAIN:
    randomRecipientIndex = static_cast<int>(rand() % person.size() + 1);
    if(randomCallerIndex == randomRecipientIndex){
        goto AGAIN;
    }

    Person caller = person[randomCallerIndex];
    Person recipient = person[randomRecipientIndex];
    std::cout << caller.getName() << " is calling " << recipient.getName();

    Tower callerTower;
    BaseStation callerBaseStation;
    BaseStation recipientBaseStation;
    Tower recipientTower;
    std::string input;
    std::string answer;
    std::cin >> input;

    caller.makingACall(input);
    callerTower.setTowerBuffer(input);
    callerTower.callToBaseStation(callerTower.getTowerBuffer());
    callerBaseStation.setBaseStationBuffer(callerTower.getTowerBuffer());
    callerBaseStation.callToBaseStation(callerBaseStation.getBaseStationBuffer());
    recipientBaseStation.setBaseStationBuffer(callerBaseStation.getBaseStationBuffer());
    recipientBaseStation.callToTower(recipientBaseStation.getBaseStationBuffer());
    recipientTower.setTowerBuffer(recipientBaseStation.getBaseStationBuffer());

    std::cout << "the answered call contains: " << recipient.answeringACall(recipientTower.getTowerBuffer()) << std::endl;
    std::cout << " Hallo? " << std::endl;
    std::cin >> answer;

    Tower tower1;
    tower1.setTowerLocation(County::GYOR);
    Person person1("Nrtkh");
    person1.setPersonLocation(County::GYOR);

    if(person1.getPersonLocation() == tower1.getTowerLocation()){
        std::cout << "jeeeejejejejjeeee" << std::endl;
    }

    return 0;
}

