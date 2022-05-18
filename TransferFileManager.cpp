#include <fstream>
#include <iostream>
#include "TransferFileManager.h"


Transfer convertToTransfer(std::string basicString);

std::vector<Transfer> getTransferListFromFile(){
        std::fstream file;
        file.open("Transfers.txt", std::ios::in);

        if (!file.good()){
            std::cout << "Plik nie istnieje" << std::endl;
        }

        std::vector<Transfer> result;
        std::string line = "";

        while(std::getline(file, line)) {
            result.push_back(convertToTransfer(line));
        }
        file.close();
        return result;
    }

Transfer convertToTransfer(std::string input) {
    std::string date; std::string amount; std::string category; std::string employeeId;
    int temp = 0;
    int temp2 = 1;
    std::string result;
    while ((temp = input.find(" ")) != std::string::npos) {
        result = input.substr(0, temp);
        switch (temp2) {
            case 1:
                date = result;
                break;
            case 2:
                amount = result;
                break;
            case 3:
                category = result;
                input.erase(0, temp + 1);
                employeeId = input;
                break;
        }
        input.erase(0, temp + 1);
        temp2++;
    }
    int intCategory = std::stoi(category);
    double doubleAmount = std::stod(amount);
    return Transfer(date, doubleAmount, intCategory, employeeId);
}

void addTransferToFile(std::string transfer){
    std::fstream file;
    file.open("Transfers.txt", std::ios::out | std::ios::app);

    if (!file.good()){
        std::cout << "Plik nie istnieje" << std::endl;
    }

    file << transfer << std::endl;
    file.close();
}
