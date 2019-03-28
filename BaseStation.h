//
// Created by Titkos on 28/03/2019.
//

#ifndef HACKATHON_VAUGHAN_BASESTATION_H
#define HACKATHON_VAUGHAN_BASESTATION_H

#include <string>

enum class Location {
    Dunantul,
    DunaTiszaKoze,
    Tiszantul,

};


class BaseStation {
public:
    BaseStation();

    BaseStation(Location baseStationLocation, int towersToBaseStation);

    void chooseATower();

    void callToTower(std::string buffer);

    void callToBaseStation(std::string buffer);

    Location getBaseStationLocation() const;

    void setBaseStationLocation(Location baseStationLocation);

    int getTowersToBaseStation() const;

    void setTowersToBaseStation(int towersToBaseStation);

    const std::string &getBaseStationBuffer() const;

    void setBaseStationBuffer(const std::string &BaseStationBuffer);

protected:
    Location baseStationLocation;
    int towersToBaseStation;
    std::string BaseStationBuffer;


};


#endif //HACKATHON_VAUGHAN_BASESTATION_H
