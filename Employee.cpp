#include <iostream>
#include "Employee.h"
#include "TransferFileManager.h"
#include "TransferManager.h"
#include <bits/stdc++.h>

Position convertStringToEnumPosition(const std::string input) {
    return input == "officeWorker" ? officeWorker : accountant;
}

std::string convertEnumToStringPosition(const Position input) {
    return input == officeWorker ? "officeWorker" : "accountant";
}


void Employee::addTransfer() {
    addNewTransfer(id);
}

std::ostream &operator<<(std::ostream &os, const Employee &employee) {
    os << "Id: " << employee.getId() << " Imie i nazwisko: " << employee.getName() << " " << employee.getSurname()
       << " Position: " << convertEnumToStringPosition(employee.getPosition());
    return os;
}

void Employee::printAllYourTransfer() {
    std::vector<Transfer> all = getTransferListFromFile();
    bool isInList = false;
    for (Transfer t: all) {
        if (t.getEmployeeId() == id) {
            isInList = true;
            std::cout << t << std::endl;
        }
    }
    if (!isInList) {
        std::cout << "Brak przelewow" << std::endl;
    }
}

const std::string &Employee::getId() const {
    return id;
}

void Employee::setId(const std::string &id) {
    Employee::id = id;
}

const std::string &Employee::getName() const {
    return name;
}

void Employee::setName(const std::string &name) {
    Employee::name = name;
}

const std::string &Employee::getSurname() const {
    return surname;
}

void Employee::setSurname(const std::string &surname) {
    Employee::surname = surname;
}

Position Employee::getPosition() const {
    return position;
}

void Employee::setPosition(Position position) {
    Employee::position = position;
}

std::string Employee::to_String() {
    return id + " " + name + " " + surname + " " + convertEnumToStringPosition(position);
}

