#include "Conversation.h"

std::vector<std::string> conversation(std::string fileName){
    std::vector<std::string> sentences;

    std::ifstream file(fileName);
    if (file.is_open()) {
        std::cout << "Open\n" << std::endl;
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

    int randomSalute = rand() % 3;
    std::cout << "Caller: " << sentences[randomSalute] << std::endl;
    randomSalute = rand() % 3;
    std::cout << "Recipient: " << sentences[randomSalute] << std::endl;

    int randomHowAreYou = rand() % 3 + 3;
    std::cout << "Caller: " << sentences[randomHowAreYou] << std::endl;
    randomHowAreYou = rand() % 3 + 6;
    std::cout << "Recipient: " << sentences[randomHowAreYou] << std::endl;

    std::cout << "Caller: " << sentences[9] << std::endl;

    int plan = rand() % 3 + 10;
    std::cout << "Recipient: " << sentences[plan] << std::endl;

    std::cout << "Caller: " << sentences[13] << std::endl;

    int mood = rand() % 3 + 14;
    std::cout << "Recipient: " << sentences[mood] << std::endl;

    int bye = rand() % 4 + 17;
    std::cout << "Caller: " << sentences[bye] << std::endl;
    bye = rand() % 4 + 17;
    std::cout << "Recipient: " << sentences[bye] << std::endl;

    /*for (int i = 0; i <sentences.size() ; ++i) {
        std::cout << i << ":" << sentences[i] << "\n" << std::endl;
    }*/
    file.close();
    return sentences;

}

