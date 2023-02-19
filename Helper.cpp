#include "Helper.h"
#include <string>
#include <vector>

std::string GetPositionString(int position)
{
    std::vector<std::string> positionNames{"Developer", "Tester", "ProjectManager", "Documentation", "Marketing"};
    return positionNames.at(position);
}

std::string GetStatusString(int status)
{
    std::vector<std::string> statusNames{"Pending", "ProposedAsResolved", "Resolved", "Unfixable", "NotAnIssue"};
    return statusNames.at(status);
}

std::string GetPriorityString(int pritority)
{
    std::vector<std::string> pritorityNames{"Low = 0", "Regular", "High", "Critical"};
    return pritorityNames.at(pritority);
}