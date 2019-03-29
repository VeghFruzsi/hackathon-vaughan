#ifndef HACKATHON_VAUGHAN_TOWER_H
#define HACKATHON_VAUGHAN_TOWER_H

#include "Location.h"
#include <string>

class Tower {
public:
    Tower();

    Tower(int towerID, County towerLocation);

    int getTowerID() const;

    void setTowerID(int towerID);

    std::string getTowerLocationString() const;
    County getTowerLocation() const;
    void setTowerLocation(County towerLocation);

    const std::string &getBaseStation() const;

    const std::string &getTowerBuffer() const;

    void setTowerBuffer(const std::string &towerBuffer);

protected:
    int towerID;
    County towerLocation;
    std::string towerBuffer;
};

#endif //HACKATHON_VAUGHAN_TOWER_H
