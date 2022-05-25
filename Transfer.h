#ifndef MSPK_TRANSFER_H
#define MSPK_TRANSFER_H

#include <string>
#include "Date.h"

enum Category {
    paliwo = 1, szkolenia = 2, zakwaterowanie = 3, wyżywienie = 4
};

std::string categoryToString(Category category);

class Transfer {
private:
    std::string date;
    std::string hour;
    double amount;
    Category category;
    std::string employeeId;

public:
    Transfer(const std::string date, const std::string hour, const double amount, Category category,
             const std::string employeeId) : date(date), hour(hour), amount(amount), category(category),
                                             employeeId(employeeId) {}

    Transfer(const std::string date, const std::string hour, const double amount, int category,
             const std::string employeeId) : date(date), hour(hour), amount(amount), category((Category) category),
                                             employeeId(employeeId) {}

    const std::string &getDateFromSystem() const;
    void setDate(const std::string &date);

    double getAmount() const;
    void setAmount(double amount);

    Category getCategory() const;
    void setCategory(Category category);

    const std::string &getEmployeeId() const;

    void setEmployeeId(const std::string &employeeId);
    friend std::ostream &operator<<(std::ostream &os, const Transfer &transfer);

    const std::string &getHour() const;
    void setHour(const std::string &hour);
};


#endif //MSPK_TRANSFER_H
