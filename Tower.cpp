#include <iostream>
#include "Tower.h"

Tower::Tower() {}

Tower::Tower(int towerID, County towerLocation, const std::string &baseStation) : towerID(towerID),
                                                                                         towerLocation(towerLocation),
                                                                                         baseStation(baseStation) {}

int Tower::getTowerID() const {
    return towerID;
}

void Tower::setTowerID(int towerID) {
    Tower::towerID = towerID;
}

std::string Tower::getTowerLocationString() const {
    std::string location;
    switch
            (towerLocation) {
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

void Tower::setTowerLocation(County towerLocation) {
    Tower::towerLocation = towerLocation;
}

const std::string &Tower::getBaseStation() const {
    return baseStation;
}

void Tower::setBaseStation(const std::string &baseStation) {
    Tower::baseStation = baseStation;
}

void Tower::callToBaseStation(std::string buffer) {
    std::cout << "call from tower is enroute to base station : " << buffer << std::endl;
}

void Tower::callToPerson(std::string buffer) {

}

const std::string &Tower::getTowerBuffer() const {
    return towerBuffer;
}

void Tower::setTowerBuffer(const std::string &towerBuffer) {
    Tower::towerBuffer = towerBuffer;
}

County Tower::getTowerLocation() const {
    return towerLocation;
}
