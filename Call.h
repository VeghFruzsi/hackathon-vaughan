#ifndef HACKATHON_VAUGHAN_CALL_H
#define HACKATHON_VAUGHAN_CALL_H

#include "BaseStation.h"
#include "Person.h"
#include "Tower.h"

#include <iostream>
#include <vector>

void call(Person caller, Person recipient, std::vector<BaseStation> baseStationVector, std::vector<Tower> towerVector, std::string input);

BaseStation getBaseOfTower(Tower tower1, std::vector<BaseStation> baseStationVector);

void switchCallerReciever(Person &caller, Person &recipient);


#endif //HACKATHON_VAUGHAN_CALL_H
