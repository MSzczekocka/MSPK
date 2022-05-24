#include <iostream>
#include "OfficeWorkerInterface.h"


void ofStartMenu(OfficeWorker of) {
    std::cout << "Przelewy: " << std::endl;
    std::cout << "1. Dodaj przelew" << std::endl;
    std::cout << "2. Sprawdz wszystkie swoje przelewy" << std::endl;
    std::cout << "0. Koniec" << std::endl;

    std::string input;
    std::cin >> input;

    while (input != "0" && input != "1" && input != "2") {
        std::cout << "Podaj liczbe z zakresu od 0 do 2" << std::endl;
        std::cin >> input;
    }

    int result = stoi(input);

    switch (result) {
        case 0:
            exit(0);
        case 1:
            of.addTransfer();
            break;
        case 2:
            of.printAllYourTransfer();
            break;
    }

    std::cout << '\n';
    ofStartMenu(of);
}
