#pragma once
#include "csvfile.h"
#include "INC/USR/user.h"

class UsersCsvFile : public csvfile
{
public:
    UsersCsvFile(std::string newFileName);
    
    void writeUser(const User& user);

private:
    std::string fileName;
};