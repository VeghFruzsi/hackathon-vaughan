#include <iostream>
#include "BaseStation.h"

BaseStation::BaseStation() {}

BaseStation::BaseStation(Region baseStationLocation, int towersToBaseStation) : baseStationLocation(
        baseStationLocation), towersToBaseStation(towersToBaseStation) {

}

Region BaseStation::getBaseStationLocation() const {
    return baseStationLocation;
}

void BaseStation::setBaseStationLocation(Region baseStationLocation) {
    BaseStation::baseStationLocation = baseStationLocation;
}

const std::string &BaseStation::getBaseStationBuffer() const {
    return BaseStationBuffer;
}

void BaseStation::setBaseStationBuffer(const std::string &BaseStationBuffer) {
    BaseStation::BaseStationBuffer = BaseStationBuffer;
}

int BaseStation::getBaseID() const {
    return baseID;
}

void BaseStation::setBaseID(int baseID) {
    BaseStation::baseID = baseID;
}

std::string BaseStation::getBaseStationLocationString() {
    std::string location;
    switch(baseStationLocation){
        case Region::DUNANTUL:
            location="Dunantul";
            break;
        case Region::DUNATISZAKOZE:
            location="Dunatiszakoze";
            break;
        case Region::TISZANTUL :
            location="Tiszantul";
            break;
        case Region::INVALID :
            location="Invalid";
            break;
    }
    return location;
}
