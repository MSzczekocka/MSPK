#include <iostream>
#include "AccountantInterface.h"
#include "TransferManager.h"

void accountantStartMenu(Accountant accountant) {
    std::cout << "Przelewy: " << std::endl;
    std::cout << "1. Dodaj przelew" << std::endl;
    std::cout << "2. Sprawdz wszystkie swoje przelewy" << std::endl;
    std::cout << "3. Sprawdz wszystkie przelewy" << std::endl;
    std::cout << "4. Sprawdz przelewy pracownika" << std::endl;
    std::cout << "0. Koniec" << std::endl;

    std::string input;
    std::cin >> input;

    while (input != "0" && input != "1" && input != "2" && input != "3" && input != "4") {
        std::cout << "Podaj liczbe z zakresu od 0 do 4" << std::endl;
        std::cin >> input;
    }

    int result = stoi(input);

    switch (result) {
        case 0:
            exit(0);
        case 1:
            accountant.addTransfer();
            break;
        case 2:
            accountant.printAllYourTransfer();
            break;
        case 3:
            printAllTransfers();
            break;
        case 4:
            printEmployeeTransfers();
            break;
    }

    std::cout << '\n';
    accountantStartMenu(accountant);
}