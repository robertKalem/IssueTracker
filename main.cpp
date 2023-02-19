#include <iostream>
#include <vector>
#include <string>
#include "Issue.h"
#include "User.h"
#include "TrackerHelper.h"

int main()
{
    // std::vector<std::string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    // msg.back() = "changed it!";

    // User matic("Robert", "Kalem", 2);
    std::string descript = "Breakpoints are not working when a reset is done after a WDT interrupt has occurred";

    User Robo = User("Robert", "Kalem", EIPositions::Developer);
    User Dusak = User("Jure", "Dusak", EIPositions::Documentation);
    User Sokol = User("Jure", "Kokol", EIPositions::Marketing);

    // std::cout << Robo << std::endl;
    // bool a = *descript;
    // const std::string &desc = descript;

    Issue Bkpt = Issue("Breakpoint Fail", descript, EIPRiority::Regular, Robo);
    Issue Buy = Issue("Buy toilet paper!!", descript, EIPRiority::High, Sokol);

    std::cout << Robo.getFullName() << " works as a " << GetPositionString(Robo.getPosition()) << std::endl;
    std::cout << Dusak.getFullName() << " works as a " << GetPositionString(Dusak.getPosition()) << std::endl;
    std::cout << Sokol.getFullName() << " works as a " << GetPositionString(Sokol.getPosition()) << std::endl;

    Bkpt.assignUser(Dusak);
    Bkpt.addWatcher(Sokol);

    std::vector<User *> everybody;
    std::cout << "Assigned for issue " << Bkpt.getTitle() << ":";
    everybody = Bkpt.getListOfAssignees();

    printIssueInfo(Bkpt);

    Buy.addWatcher(Robo);
    Buy.addWatcher(Dusak);

    printIssueInfo(Buy);

    printIssueInfo(Buy);

    // std::cout < < < < std::endl;

    // for (const std::string &word : msg)
    //{
    //     std::cout << word << " ";
    // }
    // std::cout << std::endl;
}