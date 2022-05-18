#include <iostream>
#include "TransferManager.h"
#include "TransferFileManager.h"
#include "EmployeeManager.h"
#include <bits/stdc++.h>

std::string getTransferAmount(){
    std::cout << "Podaj kwote (w zaokrogleniu do złotówek)" << std::endl;
    int zl;
    while (!(std::cin >> zl)) {
        std::cout << "Zly typ zmiennej. Podaj liczbe wieksza od zera: ";
        while (zl < 0) {
            std::cout << "Podaj liczbe wieksza od zera" << std::endl;
            std::cin >> zl;
        }
    }

    std::cout << "Podaj kwote po przecinku" << std::endl;
    int gr;
    while (!(std::cin >> gr)) {
        std::cout << "Zly typ zmiennej. Podaj liczbe z zakresu od 0 do 99: ";
        while (gr < 0 || gr > 99) {
            std::cout << "Podaj liczbe z zakresu od 0 do 99" << std::endl;
            std::cin >> gr;
        }
    }
    return std::to_string(zl) + "." + std::to_string(gr);
}

std::string getTransferDate(){
    time_t now = time(0);
    return ctime(&now);
}

int pickCategory(){
    std::cout << "Wybierz kategorie przelewu: " << std::endl;
    std::cout << "1. Paliwo" << std::endl;
    std::cout << "2. Szkolenia" << std::endl;
    std::cout << "3. Zakwaterowanie" << std::endl;
    std::cout << "4. Wyżywienie" << std::endl;

    std::string input;
    std::cin >> input;
    while(input != "0" && input != "1" && input != "2" && input != "3" && input != "4") {
        std::cout << "Podaj liczbe z zakresu od 0 do 4" << std::endl;
        std::cin >> input;
    }
    return stoi(input);
}

void addNewTransfer() {
    std::string date = getTransferDate();
    std::string amount = getTransferAmount();
    int category = pickCategory();

    std::string request = date + " " + amount + " " + std::to_string(category) + " 1";
    addTransferToFile(request);
}

void printAllTransfers(){
    std::vector<Transfer> all = getTransferListFromFile();
    for (Transfer t : all) {
        std::cout << t << std::endl;
    }
}

void printEmployeeTransfers(){
    std::vector<Transfer> all = getTransferListFromFile();
    std::cout << "Podaj ID pracownika" << std::endl;
    std::string employeeId;
    std::cin >> employeeId;

    if (isUnique(stringUpper(employeeId))){
        std::cout << "Brak pracownika w bazie" << std::endl;
    } else {
        for (Transfer t : all) {
            if (t.getEmployeeId() == stringUpper(employeeId)){
                std::cout << t << std::endl;
            }
        }
    }
}