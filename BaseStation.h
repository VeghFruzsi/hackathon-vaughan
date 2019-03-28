//
// Created by Titkos on 28/03/2019.
//

#ifndef HACKATHON_VAUGHAN_BASESTATION_H
#define HACKATHON_VAUGHAN_BASESTATION_H

enum class Location{
    Dunantul,
    DunaTiszaKoze,
    Tiszantul,

};



class BaseStation {
public:
    BaseStation();

    BaseStation(Location baseStationLocation, int towersToBaseStation);

    void chooseATower();

    void callToTower();
    void callToBaseStation();

protected:
    Location baseStationLocation;
    int towersToBaseStation;


};


#endif //HACKATHON_VAUGHAN_BASESTATION_H
