#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <ctime>

#include "BaseStation.h"
#include "Person.h"
#include "Tower.h"
#include "Location.h"
#include "ReadFromFile.h"
#include "Conversation.h"

BaseStation getBaseOfTower(Tower tower1, std::vector<BaseStation> baseStationVector);

int main() {

    srand(time(NULL));
    std::vector<Person> person = readFromPersonFile("../person.txt");
    std::vector<Tower> towerVector = readFromTowerFile("../tower.txt");
    std::vector<std::string> peopleConversation = conversation("../conversation.txt");
    std::vector<BaseStation> baseStationVector = readFromBaseStationFile("../basestation.txt");

    int randomCallerIndex = 2;
    int randomRecipientIndex = 0;

    do {
        randomCallerIndex = rand() % (int)person.size() - 1;
        randomRecipientIndex = rand() % (int)person.size() - 1;
    }
    while (randomCallerIndex == randomRecipientIndex);

    Person caller = person[randomCallerIndex];
    Person recipient = person[randomRecipientIndex];
    std::cout << caller.getName() << " is calling " << recipient.getName();
    Tower callerTower;

    std::string input = "valami";
    //std::cin >> input;
    std::cout << "input   " << input << std::endl;
    callerTower.setTowerBuffer(input);

    if(caller.getPersonLocation() == recipient.getPersonLocation()){
        recipient.setPersonBuffer(callerTower.getTowerBuffer());
        std::cout << "1: with the same tower : " << recipient.getPersonBuffer() << std::endl;
    }else{
        BaseStation baseStation = getBaseOfTower(callerTower, baseStationVector);
        baseStation.setBaseStationBuffer(callerTower.getTowerBuffer());
        for(int i = 0; i < towerVector.size(); ++i){
            if(towerVector[i].getTowerLocation() == recipient.getPersonLocation()){
                if(getBaseOfTower(towerVector[i], baseStationVector).getBaseID() == getBaseOfTower(callerTower, baseStationVector).getBaseID()){
                    towerVector[i].setTowerBuffer(getBaseOfTower(callerTower, baseStationVector).getBaseStationBuffer());
                    recipient.setPersonBuffer(towerVector[i].getTowerBuffer());
                    std::cout << "2: same base station and same region: " << baseStation.getBaseStationBuffer() << std::endl;
                }else{
                    getBaseOfTower(towerVector[i], baseStationVector).setBaseStationBuffer(getBaseOfTower(callerTower, baseStationVector).getBaseStationBuffer());
                    towerVector[i].setTowerBuffer(getBaseOfTower(towerVector[i], baseStationVector).getBaseStationBuffer());
                    recipient.setPersonBuffer(towerVector[i].getTowerBuffer());
                    std::cout << "3: other region: " << baseStation.getBaseStationBuffer() << std::endl;
                }
            }
        }
    }
    return 0;
}

BaseStation getBaseOfTower(Tower tower1, std::vector<BaseStation> baseStationVector)
{
    switch(tower1.getTowerLocation()){
        case County::SZEKESFEHERVAR: case County::TATABANYA: case County::VESZPREM: case County::PECS: case County::KAPOSVAR: case County::SZEKSZARD: case County::GYOR: case County::SZOMBATHELY: case County::ZALAEGERSZEG:
            for (int i = 0; i < baseStationVector.size(); ++i) {
                //baseStationVector[i].setBaseStationBuffer("DUNANTUL");
                if(baseStationVector[i].getBaseStationLocation() == Region::DUNANTUL){
                    return baseStationVector[i];
                }
            }
            break;

        case County::BUDAPEST: case County::KECSKEMET: case County::SALGOTARJAN: case County::SZOLNOK: case County::EGER:
            for (int i = 0; i < baseStationVector.size(); ++i) {
                //baseStationVector[i].setBaseStationBuffer("DUNATISZAKOZE");
                if(baseStationVector[i].getBaseStationLocation() == Region::DUNATISZAKOZE){
                    return baseStationVector[i];
                }
            }
                break;

        case County::DEBRECEN: case County::MISKOLC: case County::NYIREGYHAZA: case County::BEKESCSABA: case County::SZEGED:
            for (int i = 0; i < baseStationVector.size(); ++i) {
                //baseStationVector[i].setBaseStationBuffer("TISZANTUL");
                if(baseStationVector[i].getBaseStationLocation() == Region::TISZANTUL){
                    return baseStationVector[i];
                }
            }
            break;

        case County::INVALID:
            std::cout << "Wrong location set for  tower ID: " << tower1.getTowerID() << std::endl;
            break;
    }
    return BaseStation();
}
