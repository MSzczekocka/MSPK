cmake_minimum_required(VERSION 3.20)
project(MSPK)

set(CMAKE_CXX_STANDARD 14)

add_executable(MSPK main.cpp Employee.cpp Employee.h EmployeeFileManager.cpp EmployeeFileManager.h OfficeWorker.cpp OfficeWorker.h Transfer.cpp Transfer.h EmployeeManager.cpp EmployeeManager.h ManagerInterface.cpp ManagerInterface.h TransferManager.cpp TransferManager.h Accountant.cpp Accountant.h AccountantInterface.cpp AccountantInterface.h StartInterfaceEmployee.cpp StartInterfaceEmployee.h TransferFileManager.cpp TransferFileManager.h Date.cpp Date.h)
