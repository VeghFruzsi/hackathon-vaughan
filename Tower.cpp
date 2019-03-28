//
// Created by Titkos on 28/03/2019.
//

#include "Tower.h"

Tower::Tower() {}

Tower::Tower(int towerID, Location towerLocation, const std::string &baseStation) : towerID(towerID),
                                                                                    towerLocation(towerLocation),
                                                                                    baseStation(baseStation) {}

int Tower::getTowerID() const {
    return towerID;
}

void Tower::setTowerID(int towerID) {
    Tower::towerID = towerID;
}

Location Tower::getTowerLocation() const {
    return towerLocation;
}

void Tower::setTowerLocation(Location towerLocation) {
    Tower::towerLocation = towerLocation;
}

const std::string &Tower::getBaseStation() const {
    return baseStation;
}

void Tower::setBaseStation(const std::string &baseStation) {
    Tower::baseStation = baseStation;
}

void Tower::callToBaseStation() {

}
