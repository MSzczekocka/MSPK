#ifndef MSPK_STARTINTERFACEEMPLOYEE_H
#define MSPK_STARTINTERFACEEMPLOYEE_H

#include <iostream>
#include "EmployeeManager.h"

void employeeStartMemu() {
    std::cout << "Podaj swoje id" << std::endl;
    std::string id;
    std::cin >> id;
    if (isUnique(stringUpper(id))) {
        std::cout << "Brak id w bazie pracownikow" << std::endl;
        exit(0);
    } else {
//
    }
}


#endif //MSPK_STARTINTERFACEEMPLOYEE_H
