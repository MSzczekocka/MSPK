#include <fstream>
#include <iostream>
#include "EmployeeFileManager.h"

Employee convertToEmployee(std::string line) {
    std::string id; std::string name; std::string surname; std::string position;
    int temp = 0;
    int temp2 = 1;
    std::string result;
    while ((temp = line.find(" ")) != std::string::npos) {
        result = line.substr(0, temp);
        switch (temp2) {
            case 1:
                id = result;
                break;
            case 2:
                name = result;
                break;
            case 3:
                surname = result;
                line.erase(0, temp + 1);
                position = line;
                break;
        }
        line.erase(0, temp + 1);
        temp2++;
    }

    return Employee(id, name, surname, position);
}

std::vector<Employee> getEmployeeListFromFile() {
    std::fstream file;
    file.open("Employee.txt", std::ios::in);

    if (!file.good()){
        std::cout << "Plik nie istnieje" << std::endl;
    }

    std::vector<Employee> result;
    std::string line = "";

    while(std::getline(file, line)) {
        result.push_back(convertToEmployee(line));
    }
    file.close();
    return result;
}

void addEmployeeToFile(std::string employee){
    std::fstream file;
    file.open("Employee.txt", std::ios::out | std::ios::app);

    if (!file.good()){
        std::cout << "Plik nie istnieje" << std::endl;
    }

    file << employee << std::endl;
    file.close();
}

void createNewEmployeeToFile(std::vector<Employee> employees){
    std::fstream file;
    file.open("Employee.txt", std::ios::out);

    if (!file.good()){
        std::cout << "Plik nie istnieje" << std::endl;
    }

    for (Employee e : employees) {
        file << e.to_String() << std::endl;
    }
    file.close();
}





