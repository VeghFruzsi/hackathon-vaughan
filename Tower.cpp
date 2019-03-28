//
// Created by Titkos on 28/03/2019.
//

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

County Tower::getTowerLocation() const {
    return towerLocation;
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
