#pragma once

#include <string>
#include <vector>
#include <ctime>

enum EIStatus
{
    Pending = 0,
    ProposedAsResolved,
    Resolved,
    Unfixable,
    NotAnIssue
};

enum EIPRiority
{
    Low = 0,
    Regular,
    High,
    Critical
};

class User;

class Issue
{
public:
    Issue(const std::string &TITLE,
          std::string &DESCRIPTION,
          EIPRiority PRIORITY,
          User &ASIGNEE);

    std::string getTitle() const;
    std::string getDescription() const;
    int getStatus() const;
    int getPriority() const;
    std::string getTimeOfReport() const;
    std::vector<User *> getListOfAssignees();
    std::vector<User *> getListOfWatchers();

    bool isIssueResolved();

    void assignUser(User &Asignee);
    void addWatcher(User &Watcher);
    void updateDescription(std::string UpdatedDescription);

private:
    std::string Title;
    std::string Description;
    int Status; // create an enum for this value
    int Priority;
    std::time_t TimeOfReport;

    std::vector<User *> Assignees{};
    std::vector<User *> Watchers{};
};