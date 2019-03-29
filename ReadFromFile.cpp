#include "ReadFromFile.h"

std::vector<Person> readFromPersonFile(std::string fileName){
    std::vector<Person> person;
    std::ifstream file(fileName);
    if (file.is_open()) {
        std::cout << "Telephone book opened.\n" << std::endl;
    } else {
        std::cout << "Your file is closed" << std::endl;
        exit(EXIT_FAILURE);
    }
    std::string line;
    while (std::getline(file, line)) {

        std::istringstream stringStream(line);

        std::string name;
        std::getline(stringStream, name, ',');

        Person person1(name);

        std::string phoneNumber;
        std::getline(stringStream, phoneNumber, ',');
        person1.setNumber(phoneNumber);

        std::string place;
        std::getline(stringStream, place, ',');

        std::string county;
        std::getline(stringStream, county, ',');

        if(county == "Szombathely"){
            person1.setPersonLocation(County::SZOMBATHELY);
        } else if(county == "Gyor"){
            person1.setPersonLocation(County::GYOR);
        } else if(county == "Zalaegerszeg"){
            person1.setPersonLocation(County::ZALAEGERSZEG);
        } else if(county == "Veszprem"){
            person1.setPersonLocation(County::VESZPREM);
        } else if(county == "Kaposvar"){
            person1.setPersonLocation(County::KAPOSVAR);
        } else if(county == "Pecs"){
            person1.setPersonLocation(County::PECS);
        } else if(county == "Szekszard"){
            person1.setPersonLocation(County::SZEKSZARD);
        } else if(county == "Szekesfehervar"){
            person1.setPersonLocation(County::SZEKESFEHERVAR);
        } else if(county == "Tatabanya"){
            person1.setPersonLocation(County::TATABANYA);
        } else if(county == "Budapest"){
            person1.setPersonLocation(County::BUDAPEST);
        } else if(county == "Kecskemet"){
            person1.setPersonLocation(County::KECSKEMET);
        } else if(county == "Szeged"){
            person1.setPersonLocation(County::SZEGED);
        } else if(county == "Szolnok"){
            person1.setPersonLocation(County::SZOLNOK);
        } else if(county == "Salgotarjan"){
            person1.setPersonLocation(County::SALGOTARJAN);
        } else if(county == "Eger"){
            person1.setPersonLocation(County::EGER);
        } else if(county == "Bekescsaba"){
            person1.setPersonLocation(County::BEKESCSABA);
        } else if(county == "Debrecen"){
            person1.setPersonLocation(County::DEBRECEN);
        } else if(county == "Nyiregyhaza"){
            person1.setPersonLocation(County::NYIREGYHAZA);
        } else if(county == "Miskolc"){
            person1.setPersonLocation(County::MISKOLC);
        } else{
            person1.setPersonLocation(County::INVALID);
        }
        person.push_back(person1);
    }

    file.close();
    return person;
}

std::vector<Tower> readFromTowerFile(std::string fileName){
    std::vector<Tower> towerVector;
    std::ifstream file(fileName);
    if (file.is_open()) {
        std::cout << "Local ransmission towers activated.\n" << std::endl;
    } else {
        std::cout << "Your file is closed" << std::endl;
        exit(EXIT_FAILURE);
    }

    std::string line;
    while (std::getline(file, line)) {

        std::istringstream stringStream(line);

        Tower tower1;

        std::string id;
        std::getline(stringStream, id, ',');

        int towerID = std::stoi(id);
        tower1.setTowerID(towerID);

        std::string county;
        std::getline(stringStream, county, ',');

        if(county == "Szombathely"){
            tower1.setTowerLocation(County::SZOMBATHELY);
        } else if(county == "Gyor"){
            tower1.setTowerLocation(County::GYOR);
        } else if(county == "Zalaegerszeg"){
            tower1.setTowerLocation(County::ZALAEGERSZEG);
        } else if(county == "Veszprem"){
            tower1.setTowerLocation(County::VESZPREM);
        } else if(county == "Kaposvar"){
            tower1.setTowerLocation(County::KAPOSVAR);
        } else if(county == "Pecs"){
            tower1.setTowerLocation(County::PECS);
        } else if(county == "Szekszard"){
            tower1.setTowerLocation(County::SZEKSZARD);
        } else if(county == "Szekesfehervar"){
            tower1.setTowerLocation(County::SZEKESFEHERVAR);
        } else if(county == "Tatabanya"){
            tower1.setTowerLocation(County::TATABANYA);
        } else if(county == "Budapest"){
            tower1.setTowerLocation(County::BUDAPEST);
        } else if(county == "Kecskemet"){
            tower1.setTowerLocation(County::KECSKEMET);
        } else if(county == "Szeged"){
            tower1.setTowerLocation(County::SZEGED);
        } else if(county == "Szolnok"){
            tower1.setTowerLocation(County::SZOLNOK);
        } else if(county == "Salgotarjan"){
            tower1.setTowerLocation(County::SALGOTARJAN);
        } else if(county == "Eger"){
            tower1.setTowerLocation(County::EGER);
        } else if(county == "Bekescsaba"){
            tower1.setTowerLocation(County::BEKESCSABA);
        } else if(county == "Debrecen"){
            tower1.setTowerLocation(County::DEBRECEN);
        } else if(county == "Nyiregyhaza"){
            tower1.setTowerLocation(County::NYIREGYHAZA);
        } else if(county == "Miskolc"){
            tower1.setTowerLocation(County::MISKOLC);
        } else{
            tower1.setTowerLocation(County::INVALID);
        }
        towerVector.push_back(tower1);
    }
    file.close();
    return towerVector;
}

std::vector<BaseStation> readFromBaseStationFile(std::string fileName)
{
    std::vector<BaseStation> baseStationVector;
    std::ifstream file(fileName);
    if (file.is_open()) {
        std::cout << "Base stations activated.\n" << std::endl;
    } else {
        std::cout << "Your file is closed" << std::endl;
        exit(EXIT_FAILURE);
    }

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream stringStream(line);

        BaseStation base1;

        std::string id;
        std::getline(stringStream, id, ',');
        int baseID = std::stoi(id);
        base1.setBaseID(baseID);

        std::string region;
        std::getline(stringStream, region, ',');
        if(region == "Dunantul"){
            base1.setBaseStationLocation(Region::DUNANTUL);
        }else if(region == "Dunatiszakoze"){
            base1.setBaseStationLocation(Region::DUNATISZAKOZE);
        }else if(region == "Tiszantul"){
            base1.setBaseStationLocation(Region::TISZANTUL);
        }else{
            base1.setBaseStationLocation(Region::INVALID);
        }

        baseStationVector.push_back(base1);
    }
    return baseStationVector;
}

std::vector<std::string> readFromConversation(std::string fileName){
    std::vector<std::string> sentences;

    std::ifstream file(fileName);
    if (file.is_open()) {
        std::cout << "Ring ... Ring ... Ring    (press ENTER to answer)\n" << std::endl;
    } else {
        std::cout << "Your file is closed" << std::endl;
    }
    std::string sentence;
    int line = 0;
    while ( getline (file,sentence) )
    {
        sentences.push_back(sentence);
        line++;
    }
    file.close();
    return sentences;
}
