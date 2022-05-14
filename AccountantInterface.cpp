#include <iostream>
#include "AccountantInterface.h"
#include "EmployeeManager.h"
#include "TransferManager.h"

void accountantStartMemu() {
    std::cout << "Podaj swoje id" << std::endl;
    std::string id;
    std::cin >> id;
    if (isUnique(stringUpper(id))) {
        std::cout << "Brak id w bazie pracownikow" << std::endl;
        exit(0);
    } else {
//        accountantTransferMemu();
    }
}