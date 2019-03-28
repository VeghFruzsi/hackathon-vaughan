//
// Created by Titkos on 28/03/2019.
//

#include <iostream>
#include "BaseStation.h"

BaseStation::BaseStation() {}

BaseStation::BaseStation(Location baseStationLocation, int towersToBaseStation) : baseStationLocation(
        baseStationLocation), towersToBaseStation(towersToBaseStation) {

}

void BaseStation::chooseATower() {

}

void BaseStation::callToTower(std::string buffer) {
    std::cout << "the call from base is enroute tho recieving tower " << buffer << std::endl;
}

void BaseStation::callToBaseStation(std::string buffer) {
    std::cout << "the call from base is enroute tho another base" << buffer << std::endl;
}

Location BaseStation::getBaseStationLocation() const {
    return baseStationLocation;
}

void BaseStation::setBaseStationLocation(Location baseStationLocation) {
    BaseStation::baseStationLocation = baseStationLocation;
}

int BaseStation::getTowersToBaseStation() const {
    return towersToBaseStation;
}

void BaseStation::setTowersToBaseStation(int towersToBaseStation) {
    BaseStation::towersToBaseStation = towersToBaseStation;
}

const std::string &BaseStation::getBaseStationBuffer() const {
    return BaseStationBuffer;
}

void BaseStation::setBaseStationBuffer(const std::string &BaseStationBuffer) {
    BaseStation::BaseStationBuffer = BaseStationBuffer;
}



