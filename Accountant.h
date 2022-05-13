#ifndef MSPK_ACCOUNTANT_H
#define MSPK_ACCOUNTANT_H


#include "Employee.h"

class Accountant : public Employee{
public:
    Accountant(const std::string id, const std::string name, const std::string surname): Employee(id, name, surname, "accountant") {}
    void addTransfer() override;
    void printAllYourTransfer() override;
};


#endif //MSPK_ACCOUNTANT_H
