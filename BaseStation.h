//
// Created by Titkos on 28/03/2019.
//

#ifndef HACKATHON_VAUGHAN_BASESTATION_H
#define HACKATHON_VAUGHAN_BASESTATION_H

#include <string>
#include "Location.h"

class BaseStation {
public:
    BaseStation();

    BaseStation(Region baseStationLocation, int towersToBaseStation);

    void chooseATower();

    void callToTower(std::string buffer);

    void callToBaseStation(std::string buffer);

    Region getBaseStationLocation() const;

    void setBaseStationLocation(Region baseStationLocation);

    int getTowersToBaseStation() const;

    void setTowersToBaseStation(int towersToBaseStation);

    const std::string &getBaseStationBuffer() const;

    void setBaseStationBuffer(const std::string &BaseStationBuffer);

protected:
    Region baseStationLocation;
    int towersToBaseStation;
    std::string BaseStationBuffer;


};


#endif //HACKATHON_VAUGHAN_BASESTATION_H
