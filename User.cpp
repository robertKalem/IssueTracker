#include "User.h"

User::User(const std::string &NAME, const std::string &SURNAME, int POSITION)
    : name(NAME),
      surname(SURNAME),
      position(POSITION)
{
}

std::string User::getFullName() const
{
    return name + " " + surname;
}
int User::getPosition() const
{
    return position;
}

/*
std::vector<Issue *> User::getListOfAssingments()
{
    return Assignments;
}

std::vector<Issue *> User::getListOfReports()
{
    return Reports;
}
*/