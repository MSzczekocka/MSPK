#ifndef MSPK_DATE_H
#define MSPK_DATE_H

#include <string>

class Date {
private:
    std::string year;
    std::string month;
    std::string day;
    std::string hour;
public:
    Date(const std::string year, const std::string month, const std::string day, const std::string hour) : year(year),
                                                                                                           month(month),
                                                                                                           day(day),
                                                                                                           hour(hour) {}

    std::string toShortString() const;
    friend std::ostream &operator<<(std::ostream &os, const Date &transfer);
    static Date getDateFromSystem(std::string input);
    static Date getDateFromFile(std::string input);

    const std::string &getYear() const;
    void setYear(const std::string &year);

    const std::string &getMonth() const;
    void setMonth(const std::string &month);

    const std::string &getDay() const;
    void setDay(const std::string &day);

    const std::string &getHour() const;
    void setHour(const std::string &hour);
};


#endif //MSPK_DATE_H
