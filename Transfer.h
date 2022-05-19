#ifndef MSPK_TRANSFER_H
#define MSPK_TRANSFER_H

#include <string>
enum Category {
    paliwo = 1, szkolenia = 2, zakwaterowanie = 3, wyżywienie = 4
};

class Transfer {
private:
    std::string date;
    double amount;
    Category category;
    std::string employeeId;

public:
    Transfer(std::string date, double amount, Category category, std::string employeeId): date(date), amount(amount), category(category), employeeId(employeeId) {}
    Transfer(std::string date, double amount, int category, std::string employeeId): date(date), amount(amount), category((Category)category), employeeId(employeeId) {}

    const std::string &getDate() const;
    void setDate(const std::string &date);

    double getAmount() const;
    void setAmount(double amount);

    Category getCategory() const;
    void setCategory(Category category);

    const std::string &getEmployeeId() const;
    void setEmployeeId(const std::string &employeeId);

    friend std::ostream& operator<<(std::ostream& os, const Transfer& transfer);
};


#endif //MSPK_TRANSFER_H
