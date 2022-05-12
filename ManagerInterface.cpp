#include "ManagerInterface.h"
#include "ManagerPracownikow.h"
#include "ManagerPrzelewow.h"
//TODO struct data

std::string pobierzId();

void menuManager(){
    std::cout << "Opcja ManagePrzelewowr" << std::endl;
    std::cout << "1. Menu przelewow" << std::endl;
    std::cout << "2. Menu pracownika" << std::endl;
    std::cout << "0. Koniec" << std::endl;

    std::string input;
    std::cin >> input;

    while(input != "0" && input != "1" && input != "2") {
        std::cout << "Podaj liczbe z zakresu od 0 do 2" << std::endl;
        std::cin >> input;
    }

    int wynik = stoi(input);

    switch (wynik) {
        case 0:
            exit(0);
        case 1:
            managerPrzelewMenu();
            break;
        case 2:
            managerPracownikMenu();
            break;
    }
}

void managerPrzelewMenu() {
    std::cout << "Przelewy: " << std::endl;
    std::cout << "1. Dodaj przelew" << std::endl;
    std::cout << "2. Sprawdz wszystkie przelewy" << std::endl;
    std::cout << "3. Sprawdz przelewy pracownika" << std::endl;
    std::cout << "4. Drukuj raport" << std::endl;
    std::cout << "0. Wroc" << std::endl;

    std::string input;
    std::cin >> input;

    while(input != "0" && input != "1" && input != "2" && input != "3" && input != "4") {
        std::cout << "Podaj liczbe z zakresu od 0 do 4" << std::endl;
        std::cin >> input;
    }

    int wynik = stoi(input);

    switch (wynik) {
        case 0:
            menuManager();
            break;
        case 1:
            nowyPrzelew();
            break;
        case 2:
            zobaczWszystkiePrzelewy();
            break;
        case 3:
            zobaczPrzelewyPracownika();
            break;
        case 4:
            drukujRaportPrzelewy();
            break;
    }

    std::cout << '\n';
    managerPrzelewMenu();
}


void managerPracownikMenu() {
    std::cout << "Pracownicy: " << std::endl;
    std::cout << "1. Dodaj pracownika" << std::endl;
    std::cout << "2. Usun pracownika" << std::endl;
    std::cout << "2. Edytuj dane pracownika" << std::endl;
    std::cout << "4. Lista pracownikow" << std::endl;
    std::cout << "5. Drukuj liste pracownikow" << std::endl;
    std::cout << "0. Wroc" << std::endl;

    std::string input;
    std::cin >> input;

    while(input != "0" && input != "1" && input != "2" && input !="3" && input != "4" && input != "5") {
        std::cout << "Podaj liczbe z zakresu od 0 do 5" << std::endl;
        std::cin >> input;
    }

    int wynik = stoi(input);

    switch (wynik) {
        case 0:
            menuManager();
        case 1:
            dodajPracownika();
            break;
        case 2:
            usunPracownika();
            break;
        case 3:
            edytujDanePracownika();
            break;
        case 4:
            wyswietlListePracownikow();
            break;
        case 5:
            drukujRaportPracownicy();
            break;
    }
    std::cout << '\n';
    managerPracownikMenu();
}

