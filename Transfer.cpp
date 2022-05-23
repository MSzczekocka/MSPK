#include <iostream>
#include "Transfer.h"

std::ostream &operator<<(std::ostream &os, const Transfer &transfer) {
    os << "| " << transfer.date << " | " << transfer.hour << " | " << transfer.amount << " | " << transfer.category
       << " | " << transfer.employeeId << " |" << std::endl;
    return os;
}

const std::string &Transfer::getDate() const {
    return date;
}

void Transfer::setDate(const std::string &date) {
    Transfer::date = date;
}

double Transfer::getAmount() const {
    return amount;
}

void Transfer::setAmount(double amount) {
    Transfer::amount = amount;
}

Category Transfer::getCategory() const {
    return category;
}

void Transfer::setCategory(Category category) {
    Transfer::category = category;
}

const std::string &Transfer::getEmployeeId() const {
    return employeeId;
}

void Transfer::setEmployeeId(const std::string &employeeId) {
    Transfer::employeeId = employeeId;
}

