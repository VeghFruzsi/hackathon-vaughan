#ifndef HACKATHON_VAUGHAN_BASESTATION_H
#define HACKATHON_VAUGHAN_BASESTATION_H

#include <string>
#include "Location.h"

class BaseStation {
public:
    BaseStation();

    BaseStation(Region baseStationLocation, int towersToBaseStation);


    Region getBaseStationLocation() const;

    void setBaseStationLocation(Region baseStationLocation);

    const std::string &getBaseStationBuffer() const;

    void setBaseStationBuffer(const std::string &BaseStationBuffer);

    int getBaseID() const;

    void setBaseID(int baseID);

    std::string getBaseStationLocationString();
protected:
    Region baseStationLocation;
    int towersToBaseStation;
    std::string BaseStationBuffer;
    int baseID;
};

#endif //HACKATHON_VAUGHAN_BASESTATION_H
