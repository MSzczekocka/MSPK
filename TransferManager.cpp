#include <iostream>
#include "TransferManager.h"
#include "TransferFileManager.h"
#include "EmployeeManager.h"
#include <bits/stdc++.h>
#include "Date.h"

bool isNumeric(const std::string &str) {
    for (char ch: str) {
        if (isdigit(ch) == false) {
            return false;
        }
    }
    return true;
}

bool isCorrectZl(const std::string &str) {
    if (isNumeric(str)) {
        return stoi(str) > 0;
    }
    return false;
}

bool isCorrectGr(const std::string &str) {
    if (isNumeric(str)) {
        return stoi(str) > 0 && stoi(str) < 99;
    }
    return false;
}

std::string getTransferAmount() {
    std::cout << "Podaj kwote (w zaokrogleniu do zlotowek)" << std::endl;
    std::string zl;
    std::cin >> zl;
    while (!isCorrectZl(zl)) {
        std::cout << "Zly typ zmiennej. Podaj liczbe wieksza od zera: " << std::endl;
        std::cin >> zl;
    }

    std::cout << "Podaj kwote po przecinku" << std::endl;
    std::string gr;
    std::cin >> gr;
    while (!isCorrectGr(gr)) {
        std::cout << "Zly typ zmiennej. Podaj liczbe z zakresu od 0 do 99: " << std::endl;
        std::cin >> gr;
    }

    if (stoi(gr) < 10 && gr.find('0') == -1) {
        gr = "0" + gr;
    }

    return zl + "." + gr;
}

std::string getTransferDate() {
    time_t now = time(0);
    std::string result = ctime(&now);
    result.erase(std::remove(result.begin(), result.end(), '\n'), result.end());
    result = Date::getDate(result).toShortString();
    return result;
}

int pickCategory() {
    std::cout << "Wybierz kategorie przelewu: " << std::endl;
    std::cout << "1. Paliwo" << std::endl;
    std::cout << "2. Szkolenia" << std::endl;
    std::cout << "3. Zakwaterowanie" << std::endl;
    std::cout << "4. Wyzywienie" << std::endl;

    std::string input;
    std::cin >> input;
    while (input != "0" && input != "1" && input != "2" && input != "3" && input != "4") {
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

void printAllTransfers() {
    std::vector<Transfer> all = getTransferListFromFile();

    if (all.empty()) {
        std::cout << "Lista przelewow jest pusta" << std::endl;
    } else {
        for (Transfer t: all) {
            std::cout << t << std::endl;
        }
    }
}

void printEmployeeTransfers() {
    std::vector<Transfer> all = getTransferListFromFile();
    std::cout << "Podaj ID pracownika" << std::endl;
    std::string employeeId;
    std::cin >> employeeId;

    if (isUnique(stringUpper(employeeId))) {
        std::cout << "Brak pracownika w bazie" << std::endl;
    } else {
        for (Transfer t: all) {
            if (t.getEmployeeId() == stringUpper(employeeId)) {
                std::cout << t << std::endl;
            }
        }
    }
}