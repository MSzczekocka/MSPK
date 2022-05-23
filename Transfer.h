#ifndef MSPK_TRANSFER_H
#define MSPK_TRANSFER_H

#include <string>

enum Category {
    paliwo = 1, szkolenia = 2, zakwaterowanie = 3, wyżywienie = 4
};

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

    const std::string &getDate() const;
    void setDate(const std::string &date);

    double getAmount() const;
    void setAmount(double amount);

    Category getCategory() const;
    void setCategory(Category category);

    const std::string &getEmployeeId() const;

    void setEmployeeId(const std::string &employeeId);
    friend std::ostream &operator<<(std::ostream &os, const Transfer &transfer);
};


#endif //MSPK_TRANSFER_H
