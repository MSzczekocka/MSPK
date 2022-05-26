#include <iostream>
#include "EmployeeManager.h"
#include "EmployeeFileManager.h"
#include <bits/stdc++.h>

bool hasOnlyLetters(std::string basicString) {
    for (char c: basicString) {
        if ((int)c < 65 || (int)c > 122)
            return false;
        if ((int)c > 90 && (int)c < 97)
            return false;
    }
    return true;
}

void convertToName(std::string &input) {
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    input[0] = toupper(input[0]);
}

std::string stringUpper(std::string input) {
    transform(input.begin(), input.end(), input.begin(), ::toupper);
    return input;
}

bool isUnique(std::string id) {
    std::vector<Employee> all = getEmployeeListFromFile();
    for (Employee e: all) {
        if (e.getId() == id) {
            return false;
        }
    }
    return true;
}

std::string getEmployeeId(std::string name, std::string surname, std::string position) {
    std::vector<Employee> all = getEmployeeListFromFile();
    bool unique = false;
    int index = all.size();
    std::string result;
    while (!unique) {
        result = "";
        result = std::to_string(index) + stringUpper(name.substr(0, 1)) + stringUpper(surname.substr(0, 1));
        result += position == "officeWorker" ? "1" : "2";
        if (isUnique(result)) {
            unique = true;
        } else {
            index++;
        }
    }

    return result;
}

std::string getEmployeeName() {
    std::cout << "Podaj imie pracownika" << std::endl;
    std::string name;
    std::cin >> name;

    while (!hasOnlyLetters(name)) {
        std::cout << "Imie powinno sie skladac tylko z liter" << std::endl;
        std::cin >> name;
    }
    convertToName(name);
    return name;
}

std::string getEmployeeSurname() {
    std::cout << "Podaj nazwisko pracownika" << std::endl;
    std::string surname;
    std::cin >> surname;

    while (!hasOnlyLetters(surname)) {
        std::cout << "Nazwisko powinno sie skladac tylko z liter" << std::endl;
        std::cin >> surname;
    }
    convertToName(surname);
    return surname;
}

std::string getEmployeePosition() {
    std::cout << "Podaj stanowisko pracownika" << std::endl;
    std::cout << "1. Pracownik biurowy" << std::endl;
    std::cout << "2. Ksiegowy" << std::endl;
    std::string position;
    std::cin >> position;

    while (position != "1" && position != "2") {
        std::cout << "Podaj liczbe z zakresu od 1 do 2" << std::endl;
        std::cin >> position;
    }

    return position == "1" ? "officeWorker" : "accountant";
}

void addEmployee() {
    std::string name = getEmployeeName();
    std::string surname = getEmployeeSurname();
    std::string position = getEmployeePosition();
    std::string id = getEmployeeId(name, surname, position);
    std::string line = id + " " + name + " " + surname + " " + position;

    addEmployeeToFile(line);
}

void printAllEmployee() {
    std::vector<Employee> all = getEmployeeListFromFile();
    for (Employee e: all) {
        std::cout << e << std::endl;
    }
}

Employee employeeIsPresent(std::string idEmployee) {
    std::vector<Employee> all = getEmployeeListFromFile();
    Employee result = Employee("0", "", "", "officeWorker");
    for (Employee e: all) {
        if (e.getId() == idEmployee) {
            result = e;
        }
    }
    return result;
}

Employee findEmployee() {
    std::cout << "Podaj id pracownika" << std::endl;
    printAllEmployee();
    std::string idEmployee;
    std::cin >> idEmployee;
    idEmployee = stringUpper(idEmployee);
    return employeeIsPresent(idEmployee);
}


void removeEmployee() {
    std::vector<Employee> all = getEmployeeListFromFile();
    Employee employeeToRemove = findEmployee();
    if (employeeToRemove.getId() != "0") {
        int index = -1;
        for (int i = 0; i < all.size(); ++i) {
            if (all[i].getId() == employeeToRemove.getId()) {
                index = i;
            }
        }
        all.erase(all.begin() + index);
        createNewEmployeeFile(all);

    } else {
        std::cout << "Brak pracownika z podanym id" << std::endl;
    }
}




