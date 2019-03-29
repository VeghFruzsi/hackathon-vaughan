#include "Conversation.h"

void conversation(std::vector<std::string> sentences, std::vector<Person> person, std::vector<BaseStation> baseStationVector, std::vector<Tower> towerVector)
{
    int randomCallerIndex;
    int randomRecipientIndex;
    do {
        randomCallerIndex = rand() % (int)person.size() - 1;
        randomRecipientIndex = rand() % (int)person.size() - 1;
    }
    while (randomCallerIndex == randomRecipientIndex);

    Person caller = person[randomCallerIndex];
    Person recipient = person[randomRecipientIndex];

    std::cout << caller.getName() << " is calling " << recipient.getName() << std::endl;

    int randomSalute = rand() % 3;

    //======= PHONE RINGING ========//
    Beep(220,300);
    Beep(294,300);
    Beep(294,300);
    Beep(370,300);
    Beep(494,300);
    Beep(370,300);
    Beep(440,800);
    /* */
    Beep(440,300);
    Beep(494,300);
    Beep(440,300);
    Beep(370,300);
    Beep(392,300);
    Beep(370,300);
    Beep(330,800);
    /* */
    Beep(247,300);
    Beep(330,300);
    Beep(330,300);
    Beep(370,300);
    Beep(555,300);
    Beep(555,300);

    call(caller, recipient, baseStationVector, towerVector, sentences[randomSalute]);
    switchCallerReciever(caller, recipient);
    std::cin.get();

    randomSalute = rand() % 3;
    call(caller, recipient, baseStationVector, towerVector, sentences[randomSalute]);
    switchCallerReciever(caller, recipient);
    std::cin.get();

    int randomHowAreYou = rand() % 3 + 3;
    call(caller, recipient, baseStationVector, towerVector, sentences[randomHowAreYou]);
    switchCallerReciever(caller, recipient);
    std::cin.get();

    randomHowAreYou = rand() % 3 + 6;
    call(caller, recipient, baseStationVector, towerVector, sentences[randomHowAreYou]);
    switchCallerReciever(caller, recipient);
    std::cin.get();

    call(caller, recipient, baseStationVector, towerVector, sentences[9]);
    switchCallerReciever(caller, recipient);
    std::cin.get();

    int plan = rand() % 3 + 10;
    call(caller, recipient, baseStationVector, towerVector, sentences[plan]);
    switchCallerReciever(caller, recipient);
    std::cin.get();

    call(caller, recipient, baseStationVector, towerVector, sentences[13]);
    switchCallerReciever(caller, recipient);
    std::cin.get();

    int mood = rand() % 3 + 14;
    call(caller, recipient, baseStationVector, towerVector, sentences[mood]);
    switchCallerReciever(caller, recipient);
    std::cin.get();

    int bye = rand() % 4 + 17;
    call(caller, recipient, baseStationVector, towerVector, sentences[bye]);
    switchCallerReciever(caller, recipient);
    std::cin.get();

    bye = rand() % 4 + 17;
    call(caller, recipient, baseStationVector, towerVector, sentences[bye]);
    switchCallerReciever(caller, recipient);

    for(int i = 0; i < 10; i++) {
        Beep(523, 500);
    }
}
