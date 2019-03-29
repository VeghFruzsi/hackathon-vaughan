#ifndef HACKATHON_VAUGHAN_READFROMFILE_H
#define HACKATHON_VAUGHAN_READFROMFILE_H
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

#include "BaseStation.h"
#include "Person.h"
#include "Tower.h"
#include "Location.h"

std::vector<Person> readFromPersonFile(std::string fileName);
std::vector<Tower> readFromTowerFile(std::string fileName);
std::vector<BaseStation> readFromBaseStationFile(std::string fileName);
std::vector<std::string> readFromConversation(std::string fileName);

#endif //HACKATHON_VAUGHAN_READFROMFILE_H
