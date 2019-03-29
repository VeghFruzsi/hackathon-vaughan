#include "Call.h"

void call(Person caller, Person recipient, std::vector<BaseStation> baseStationVector, std::vector<Tower> towerVector, std::string input)
{
    Tower callerTower;

    std::cout << "input   " << input << std::endl;
    callerTower.setTowerBuffer(input);
    callerTower.setTowerLocation(caller.getPersonLocation());
    if (caller.getPersonLocation() == recipient.getPersonLocation()) {
        recipient.setPersonBuffer(callerTower.getTowerBuffer());
        std::cout << "the person is in " << caller.getPersonLocationString() << std::endl;
        std::cout << "the recipient is in: " << recipient.getPersonLocationString() << std::endl;
        std::cout << "1: with the same tower : " << recipient.getPersonBuffer() << std::endl;
        std::cout << "caller tower is in:  " << callerTower.getTowerLocationString() << std::endl;
    } else {
        BaseStation baseStation = getBaseOfTower(callerTower, baseStationVector);
        std::cout << "the person is in " << caller.getPersonLocationString() << std::endl;
        std::cout << "the recipient is in: " << recipient.getPersonLocationString() << std::endl;
        baseStation.setBaseStationBuffer(callerTower.getTowerBuffer());
        std::cout << " the caller basestation id " << baseStation.getBaseID() << std::endl;
        std::cout << "caller tower is in:  " << callerTower.getTowerLocationString() << std::endl;
        for (int i = 0; i < towerVector.size(); ++i) {
            if (towerVector[i].getTowerLocation() == recipient.getPersonLocation()) {
                std::cout << " tower location is in: " << towerVector[i].getTowerLocationString() << std::endl;
                if (getBaseOfTower(towerVector[i], baseStationVector).getBaseID() ==
                    getBaseOfTower(callerTower, baseStationVector).getBaseID()) {
                    towerVector[i].setTowerBuffer(
                            getBaseOfTower(callerTower, baseStationVector).getBaseStationBuffer());
                    recipient.setPersonBuffer(towerVector[i].getTowerBuffer());
                    std::cout << " tower location is in: " << towerVector[i].getTowerLocationString() << std::endl;
                    std::cout << "2: same base station and same region: " << baseStation.getBaseStationBuffer()
                              << std::endl;
                } else {
                    getBaseOfTower(towerVector[i], baseStationVector).setBaseStationBuffer(
                            getBaseOfTower(callerTower, baseStationVector).getBaseStationBuffer());
                    towerVector[i].setTowerBuffer(
                            getBaseOfTower(towerVector[i], baseStationVector).getBaseStationBuffer());
                    recipient.setPersonBuffer(towerVector[i].getTowerBuffer());
                    std::cout << " tower location is in: " << towerVector[i].getTowerLocationString() << std::endl;
                    std::cout << "3: other region: " << baseStation.getBaseStationBuffer() << std::endl;
                }
            }
        }
    }
}

BaseStation getBaseOfTower(Tower tower1, std::vector<BaseStation> baseStationVector)
{
    switch(tower1.getTowerLocation()){
        case County::SZEKESFEHERVAR: case County::TATABANYA: case County::VESZPREM: case County::PECS: case County::KAPOSVAR: case County::SZEKSZARD: case County::GYOR: case County::SZOMBATHELY: case County::ZALAEGERSZEG:
            for (int i = 0; i < baseStationVector.size(); ++i) {
                if(baseStationVector[i].getBaseStationLocation() == Region::DUNANTUL){
                    return baseStationVector[i];
                }
            }
            break;

        case County::BUDAPEST: case County::KECSKEMET: case County::SALGOTARJAN: case County::SZOLNOK: case County::EGER:
            for (int i = 0; i < baseStationVector.size(); ++i) {
                if(baseStationVector[i].getBaseStationLocation() == Region::DUNATISZAKOZE){
                    return baseStationVector[i];
                }
            }
            break;

        case County::DEBRECEN: case County::MISKOLC: case County::NYIREGYHAZA: case County::BEKESCSABA: case County::SZEGED:
            for (int i = 0; i < baseStationVector.size(); ++i) {
                if(baseStationVector[i].getBaseStationLocation() == Region::TISZANTUL){
                    return baseStationVector[i];
                }
            }
            break;

        case County::INVALID:
            std::cout << "Wrong location is set in database for the tower with ID: " << tower1.getTowerID() << std::endl;
            break;
    }
    return BaseStation();
}

void switchCallerReciever(Person &caller, Person &recipient)
{
    Person tempPerson;
    tempPerson = caller;
    caller = recipient;
    recipient = tempPerson;
}
