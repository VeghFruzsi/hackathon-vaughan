#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <ctime>

#include "BaseStation.h"
#include "Person.h"
#include "Tower.h"
#include "Location.h"
#include "ReadFromFile.h"
#include "Conversation.h"
#include "Call.h"

int main()
{
    srand(time(NULL));
    std::vector<Person> person = readFromPersonFile("../person.txt");
    std::vector<Tower> towerVector = readFromTowerFile("../tower.txt");
    std::vector<std::string> peopleConversation = conversation("../conversation.txt");
    std::vector<BaseStation> baseStationVector = readFromBaseStationFile("../basestation.txt");

    std::string input = "izebizegizike";

    call(person, baseStationVector, towerVector, input);
    return 0;
}
