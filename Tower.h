//
// Created by Titkos on 28/03/2019.
//

#ifndef HACKATHON_VAUGHAN_TOWER_H
#define HACKATHON_VAUGHAN_TOWER_H

enum class TowerLocation {
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

    Tower(int towerID, TowerLocation towerLocation, const std::string &baseStation);

    int getTowerID() const;

    void setTowerID(int towerID);

    TowerLocation getTowerLocation() const;

    void setTowerLocation(TowerLocation towerLocation);

    const std::string &getBaseStation() const;

    void setBaseStation(const std::string &baseStation);

    void callToBaseStation(std::string buffer);

    void callToPerson(std::string buffer);

    const std::string &getTowerBuffer() const;

    void setTowerBuffer(const std::string &towerBuffer);

protected:
    int towerID;
    TowerLocation towerLocation;
    std::string baseStation;
    std::string towerBuffer;

};


#endif //HACKATHON_VAUGHAN_TOWER_H
