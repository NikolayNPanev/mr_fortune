#include "userFile.h"

UsersCsvFile::UsersCsvFile(std::string newFileName)
    : csvfile(newFileName, ","), fileName(newFileName) 
{
    this->getStream() << "Name | Assets";
    this->endrow();
}

void UsersCsvFile::writeUser(const User& user)
{
    this->getStream() << user.getName() << user.getAssets();
    this->endrow();
}