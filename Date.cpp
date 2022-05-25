#include "Date.h"
#include <bits/stdc++.h>

const std::string &Date::getYear() const {
    return year;
}

void Date::setYear(const std::string &year) {
    Date::year = year;
}

const std::string &Date::getMonth() const {
    return month;
}

void Date::setMonth(const std::string &month) {
    Date::month = month;
}

const std::string &Date::getDay() const {
    return day;
}

void Date::setDay(const std::string &day) {
    Date::day = day;
}

const std::string &Date::getHour() const {
    return hour;
}

void Date::setHour(const std::string &hour) {
    Date::hour = hour;
}


std::string Date::toShortString() const {
    return year + "|" + month + "|" + day + " " + hour;
}

std::ostream &operator<<(std::ostream &os, const Date &date) {
    os << date.toShortString();
    return os;
}

Date Date::getDateFromSystem(std::string input) {
    std::string year;
    std::string month;
    std::string day;
    std::string hour;
    int temp = 0;
    int temp2 = 1;
    std::string result;
    while ((temp = input.find(" ")) != std::string::npos) {
        result = input.substr(0, temp);
        switch (temp2) {
            case 2:
                month = result;
                break;
            case 3:
                day = result;
                break;
            case 4:
                hour = result;
                result = input.erase(0, temp + 1);
                year = result;
                break;
        }
        input.erase(0, temp + 1);
        temp2++;
    }

    return Date(year, month, day, hour);
}





