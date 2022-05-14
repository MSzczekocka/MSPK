#ifndef MSPK_EMPLOYEE_H
#define MSPK_EMPLOYEE_H

#include <string>

enum Position {
    officeWorker, accountant
};
Position convertStringToEnumPosition(const std::string input);
std::string convertEnumToStringPosition(const Position input);

class Employee {
private:
    std::string id;
    std::string name;
    std::string surname;
    Position position;

public:
    Employee(const std::string id, const std::string name, const std::string surname, const std::string position): id(id), name(name), surname(surname), position(convertStringToEnumPosition(position)) {}
    Employee(const std::string id, const std::string name, const std::string surname, const Position position): id(id), name(name), surname(surname), position(position) {}

    const std::string &getId() const;
    void setId(const std::string &id);

    const std::string &getName() const;
    void setName(const std::string &name);

    const std::string &getSurname() const;
    void setSurname(const std::string &surname);

    Position getPosition() const;
    void setPosition(Position position);

    friend std::ostream& operator<<(std::ostream& os, const Employee& employee);

    virtual void addTransfer();
    virtual void printAllYourTransfer();
    virtual std::string to_String();

};

#endif //MSPK_EMPLOYEE_H
