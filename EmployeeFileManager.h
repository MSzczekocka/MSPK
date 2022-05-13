#ifndef MSPK_EMPLOYEEFILEMANAGER_H
#define MSPK_EMPLOYEEFILEMANAGER_H


#include <vector>
#include "Employee.h"


    std::vector<Employee> getEmployeeListFromFile();
    std::string getEmployeeId(std::string basicString, std::string basicString1, std::string basicString2);
    void addEmployeeToFile(std::string employee);
    void createNewEmployeeToFile(std::vector<Employee> employees);


#endif //MSPK_EMPLOYEEFILEMANAGER_H
