#ifndef HACKATHON_VAUGHAN_CONVERSATION_H
#define HACKATHON_VAUGHAN_CONVERSATION_H

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <windows.h>

#include "BaseStation.h"
#include "Person.h"
#include "Tower.h"
#include "Location.h"
#include "Call.h"

void conversation(std::vector<std::string> sentences, std::vector<Person> person, std::vector<BaseStation> baseStationVector, std::vector<Tower> towerVector);


#endif //HACKATHON_VAUGHAN_CONVERSATION_H
