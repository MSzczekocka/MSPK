#include <iostream>
#include "KsiegowyInterface.h"
#include "ManagerPrzelewow.h"

void ksiegowyPrzelewMenu() {
    std::cout << "Przelewy: " << std::endl;
    std::cout << "1. Dodaj przelew" << std::endl;
    std::cout << "2. Sprawdz wszystkie przelewy" << std::endl;
    std::cout << "0. Wroc" << std::endl;

    std::string input;
    std::cin >> input;

    while(input != "0" && input != "1" && input != "2") {
        std::cout << "Podaj liczbe z zakresu od 0 do 1" << std::endl;
        std::cin >> input;
    }

    int wynik = stoi(input);

    switch (wynik) {
        case 0:
//            menuManager();
            break;
        case 1:
            nowyPrzelew();
            break;
        case 2:
//            managerPracownikMenu();
            break;
    }
}