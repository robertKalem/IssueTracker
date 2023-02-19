// Helper functions that combine funcionality of classes

#include <iostream>
#include <string>
#include "TrackerHelper.h"

void printIssueInfo(Issue &IssueToPrint)
{
    std::vector<User *> allAsignees = IssueToPrint.getListOfAssignees();
    std::vector<User *> allWatchers = IssueToPrint.getListOfWatchers();
    std::string print = "\n____________________\n";
    print += " " + IssueToPrint.getTitle() + ":\n";
    print += "  Date reported: \n";
    print += "     " + IssueToPrint.getTimeOfReport();
    print += "  Status: " + GetStatusString(IssueToPrint.getStatus()) + "\n";
    print += "  Priority: " + GetPriorityString(IssueToPrint.getPriority()) + "\n";
    print += "  Assignees: \n";
    for (size_t i = 0; i < allAsignees.size(); i++)
    {
        // User::User *a = allUsers.at(i);
        print += "     " + allAsignees.at(i)->getFullName() + " (" + GetPositionString(allAsignees.at(i)->getPosition()) + ")" + "\n";
    }
    if (allWatchers.size() > 0)
    {
        print += "  Watchers: \n";
        for (size_t i = 0; i < allWatchers.size(); i++)
        {
            print += "     " + allWatchers.at(i)->getFullName() + "\n";
        }
    }
    print += "____________________\n";
    std::cout << print;
}