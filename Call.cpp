#include "Call.h"

void call(Person caller, Person recipient, std::vector<BaseStation> baseStationVector, std::vector<Tower> towerVector,
          std::string input) {
    Tower callerTower;

    callerTower.setTowerBuffer(input);
    std::cout << "Message: " << "####  " << input << "  ####" << std::endl;
    callerTower.setTowerLocation(caller.getPersonLocation());
    if (caller.getPersonLocation() == recipient.getPersonLocation()) {
        recipient.setPersonBuffer(callerTower.getTowerBuffer());
        Beep(1800,600);
        Sleep(100);
        std::cout << "The Caller is in: " << "|||" << caller.getPersonLocationString() << "|||" << std::endl;
        Beep(1800,600);
        Sleep(100);
        std::cout << "the recipient is in: " << "|||" << recipient.getPersonLocationString() << "|||" << std::endl;
        Beep(1800,600);
        Sleep(100);
        std::cout << "The Caller tower is in:  " << "&&&" << callerTower.getTowerLocationString() << "&&&" << std::endl;
        Beep(1800,600);
        Sleep(100);
        std::cout << "The call using the same tower which is in: "<< "&&&" << callerTower.getTowerLocationString()<< "&&&" << std::endl;

    } else {
        BaseStation baseStation = getBaseOfTower(callerTower, baseStationVector);
        Beep(1800,600);
        Sleep(100);
        std::cout << "The Caller is in " << "|||" << caller.getPersonLocationString() << "|||" << std::endl;
        Beep(1800,600);
        Sleep(100);
        std::cout << "The Recipient is in: " << "|||" << recipient.getPersonLocationString() << "|||" << std::endl;
        baseStation.setBaseStationBuffer(callerTower.getTowerBuffer());
        Beep(1800,600);
        Sleep(100);
        std::cout << "The Caller tower is in: " << "&&&" << callerTower.getTowerLocationString() << "&&&" << std::endl;
        Beep(1800,600);
        Sleep(100);
        std::cout << "The Caller basestation location is: " << "@@@" << baseStation.getBaseStationLocationString()
                  << "@@@" << std::endl;
        Beep(1800,600);
        Sleep(100);
        for (int i = 0; i < towerVector.size(); ++i) {
            if (towerVector[i].getTowerLocation() == recipient.getPersonLocation()) {
                Beep(1800,600);
                Sleep(100);
                std::cout << "The recipients tower location is in: " << "&&&"
                          << towerVector[i].getTowerLocationString() << "&&&" << std::endl;
                if (getBaseOfTower(towerVector[i], baseStationVector).getBaseID() ==
                    getBaseOfTower(callerTower, baseStationVector).getBaseID()) {
                    towerVector[i].setTowerBuffer(
                            getBaseOfTower(callerTower, baseStationVector).getBaseStationBuffer());
                    recipient.setPersonBuffer(towerVector[i].getTowerBuffer());
                    Beep(1800,600);
                    Sleep(100);
                    std::cout << "The call goes trough the same base station which is in: " << "@@@"
                              << baseStation.getBaseStationLocationString()
                              << "@@@" << std::endl;
                    Beep(1800,600);
                    Sleep(100);
                } else {
                    getBaseOfTower(towerVector[i], baseStationVector).setBaseStationBuffer(
                            getBaseOfTower(callerTower, baseStationVector).getBaseStationBuffer());
                    towerVector[i].setTowerBuffer(
                            getBaseOfTower(towerVector[i], baseStationVector).getBaseStationBuffer());
                    recipient.setPersonBuffer(towerVector[i].getTowerBuffer());
                    Beep(1800,600);
                    Sleep(100);
                    std::cout << "The call goes trough an other base station which is in: " << "@@@"
                              << baseStation.getBaseStationLocationString() << "@@@" << std::endl;
                    Beep(1800,600);
                    Sleep(100);
                }
            }
        }
    }
}

BaseStation getBaseOfTower(Tower tower1, std::vector<BaseStation> baseStationVector) {
    switch (tower1.getTowerLocation()) {
        case County::SZEKESFEHERVAR:
        case County::TATABANYA:
        case County::VESZPREM:
        case County::PECS:
        case County::KAPOSVAR:
        case County::SZEKSZARD:
        case County::GYOR:
        case County::SZOMBATHELY:
        case County::ZALAEGERSZEG:
            for (int i = 0; i < baseStationVector.size(); ++i) {
                if (baseStationVector[i].getBaseStationLocation() == Region::DUNANTUL) {
                    return baseStationVector[i];
                }
            }
            break;

        case County::BUDAPEST:
        case County::KECSKEMET:
        case County::SALGOTARJAN:
        case County::SZOLNOK:
        case County::EGER:
            for (int i = 0; i < baseStationVector.size(); ++i) {
                if (baseStationVector[i].getBaseStationLocation() == Region::DUNATISZAKOZE) {
                    return baseStationVector[i];
                }
            }
            break;

        case County::DEBRECEN:
        case County::MISKOLC:
        case County::NYIREGYHAZA:
        case County::BEKESCSABA:
        case County::SZEGED:
            for (int i = 0; i < baseStationVector.size(); ++i) {
                if (baseStationVector[i].getBaseStationLocation() == Region::TISZANTUL) {
                    return baseStationVector[i];
                }
            }
            break;

        case County::INVALID:
            Beep(1800,600);
            Beep(1800,600);
            Beep(1800,600);
            std::cout << "Wrong location is set in database for the tower with ID: " << tower1.getTowerID()
                      << std::endl;
            break;
    }
    return BaseStation();
}

void switchCallerReciever(Person &caller, Person &recipient) {
    Person tempPerson;
    tempPerson = caller;
    caller = recipient;
    recipient = tempPerson;
}
