#pragma once

#include <string>
#include <vector>

enum EIPositions
{
    Developer,
    Tester,
    ProjectManager,
    Marketing,
    Documentation
};

class Issue; // forward declaration so it can be used in the following class

class User
{
public:
    User(const std::string &NAME, const std::string &SURNAME, int POSITION);

    std::string getFullName() const;
    int getPosition() const;
    std::vector<Issue *> getListOfAssingments();
    std::vector<Issue *> getListOfReports();

private:
    const std::string name;
    const std::string surname;
    const int position;
    std::vector<Issue *> Assignments{};
    std::vector<Issue *> Reports{};
};