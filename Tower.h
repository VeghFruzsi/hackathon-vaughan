//
// Created by Titkos on 28/03/2019.
//

#ifndef HACKATHON_VAUGHAN_TOWER_H
#define HACKATHON_VAUGHAN_TOWER_H

enum class Location {
    SZOMBATHELY,
    GYOR,
    ZALAEGERSZEG,
    VESZPREM,
    KAPOSVAR,
    PECS,
    SZEKSZARD,
    SZEKESFEHERVAR,
    TATABANYA,
    BUDAPEST,
    KECSKEMET,
    SZEGED,
    SZOLNOK,
    SALGOTARJAN,
    EGER,
    BEKESCSABA,
    DEBRECEN,
    NYIREGYHAZA,
    MISKOLC,
};


#include <string>

class Tower {
public:
    Tower();

    Tower(int towerID, Location towerLocation, const std::string &baseStation);

    int getTowerID() const;

    void setTowerID(int towerID);

    Location getTowerLocation() const;

    void setTowerLocation(Location towerLocation);

    const std::string &getBaseStation() const;

    void setBaseStation(const std::string &baseStation);

    void callToBaseStation();

protected:
    int towerID;
    Location towerLocation;
    std::string baseStation;

};


#endif //HACKATHON_VAUGHAN_TOWER_H
