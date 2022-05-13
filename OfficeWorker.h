#ifndef MSPK_OFFICEWORKER_H
#define MSPK_OFFICEWORKER_H

#include "Employee.h"

class OfficeWorker : public Employee{
public:
    OfficeWorker(const std::string id, const std::string imie, const std::string nazwisko): Employee(id, imie, nazwisko, "officeWorker") {}
    void addTransfer() override;
    void printAllYourTransfer() override;
};


#endif //MSPK_OFFICEWORKER_H
