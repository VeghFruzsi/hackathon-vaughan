//
// Created by Titkos on 28/03/2019.
//

#ifndef HACKATHON_VAUGHAN_TOWER_H
#define HACKATHON_VAUGHAN_TOWER_H

#include "Location.h"
#include <string>

class Tower {
public:
    Tower();

    Tower(int towerID, County towerLocation, const std::string &baseStation);

    int getTowerID() const;

    void setTowerID(int towerID);

    County getTowerLocation() const;

    void setTowerLocation(County towerLocation);

    const std::string &getBaseStation() const;

    void setBaseStation(const std::string &baseStation);

    void callToBaseStation(std::string buffer);

    void callToPerson(std::string buffer);

    const std::string &getTowerBuffer() const;

    void setTowerBuffer(const std::string &towerBuffer);

protected:
    int towerID;
    County towerLocation;
    std::string baseStation;
    std::string towerBuffer;

};


#endif //HACKATHON_VAUGHAN_TOWER_H
