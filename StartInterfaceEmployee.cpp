#include <vector>
#include "StartInterfaceEmployee.h"
#include "EmployeeFileManager.h"
#include "AccountantInterface.h"
#include "OfficeWorker.h"
#include "OfficeWorkerInterface.h"

void employeeStartMenu() {
    std::cout << "Podaj swoje id" << std::endl;
    std::string id;
    std::cin >> id;
    if (isUnique(stringUpper(id))) {
        std::cout << "Brak id w bazie pracownikow" << std::endl;
        exit(0);
    } else {
      std::vector<Employee> all = getEmployeeListFromFile();
      for (Employee e : all) {
          if (e.getId() == stringUpper(id)) {
              if (e.getPosition() == accountant) {
                  accountantStartMenu(Accountant(e));
              } else {
                  ofStartMenu(OfficeWorker(e));
              }
          }
      }
    }
}