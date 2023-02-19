#include "Issue.h"
#include <ctime>

Issue::Issue(const std::string &TITLE, std::string &DESCRIPTION, EIPRiority PRIORITY, User &ASSIGNEE)
    : Title(TITLE),
      Description(DESCRIPTION),
      Priority(PRIORITY)
{
    Assignees.push_back(&ASSIGNEE); // create a Asignees vector and add the passed ASSIGNEE to it
    TimeOfReport = time(0);         // store the time of creation
    Status = EIStatus::Pending;
}
std::string Issue::getTitle() const
{
    return Title;
}
std::string Issue::getDescription() const
{
    return Description;
}
int Issue::getStatus() const
{
    return Status;
}
int Issue::getPriority() const
{
    return Priority;
}
std::string Issue::getTimeOfReport() const
{
    return ctime(&TimeOfReport);
}
std::vector<User *> Issue::getListOfAssignees()
{
    return Assignees;
}
std::vector<User *> Issue::getListOfWatchers()
{
    return Watchers;
}
// Assign additional user
void Issue::assignUser(User &Assignee)
{
    Assignees.push_back(&Assignee);
}
// Assign a watcher
void Issue::addWatcher(User &Watcher)
{
    Watchers.push_back(&Watcher);
}

