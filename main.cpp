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
    std::vector<BaseStation> baseStationVector = readFromBaseStationFile("../basestation.txt");
    std::vector<Tower> towerVector = readFromTowerFile("../tower.txt");
    std::vector<Person> person = readFromPersonFile("../person.txt");
    std::vector<std::string> peopleConversation = readFromConversation("../conversation.txt");

    conversation(peopleConversation, person, baseStationVector, towerVector);

    return 0;
}
