#pragma once
#include "csvfile.h"

class UsersCsvFile : public csvfile
{
public:
    UsersCsvFile(const std::string newFileName)
        : csvfile(newFileName, ","), fileName(newFileName) {}
    

private:
    std::string fileName;
};