#include <iostream>
#include "Pracownik.h"
#include "PracownikBiurowy.h"
#include "Przelew.h"
#include "ManagerPracownikow.h"
#include "ManagerInterface.h"


int main(int argc, char** argv) {
    menuManager();


//    std::cout << "Liczba argumentow: " << argc << std::endl;
//    std::cout << "Pierwszy argument: " << argv[0] << std::endl;
//    std::cout << "Drugi argument: " << argv[1] << std::endl;




    Pracownik os1 = Pracownik("1", "Adam", "Adamski");
    std::cout << os1 << std::endl;

    PracownikBiurowy pr1 = PracownikBiurowy( "2", "Aneta", "Anielska");
    std::cout  << pr1 << std::endl;

    Przelew prz1 = Przelew("2022.04.25", 123.56, paliwo, "1");
    std::cout  << prz1 << std::endl;
//

//    system("pause");
    return 0;
}

