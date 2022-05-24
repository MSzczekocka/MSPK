#include "StartInterfaceEmployee.h"
#include "ManagerInterface.h"


void errorMsg();

int main(int argc, char **argv) {

    if (argc == 2) {
        if (std::string(argv[1]) == "-e") {
            employeeStartMenu();
        } else if (std::string(argv[1]) == "-m")
            menuManager();
    }

    errorMsg();

    return 0;
}

void errorMsg() {
    std::cout << "W celu zalogowania sie jako manager: MSPK.exe -m " << std::endl;
    std::cout << "W celu zalogowania sie jako pracownik: MSPK.exe -e " << std::endl;
}

