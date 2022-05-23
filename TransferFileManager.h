#ifndef MSPK_TRANSFERFILEMANAGER_H
#define MSPK_TRANSFERFILEMANAGER_H


#include <vector>
#include "Transfer.h"

std::vector<Transfer> getTransferListFromFile();
void addTransferToFile(std::string transfer);

#endif //MSPK_TRANSFERFILEMANAGER_H
