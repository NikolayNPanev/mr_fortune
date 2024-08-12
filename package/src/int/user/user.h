#pragma once
#include "INC/OUT/outside_header.h"

struct Revenue {
    std::string message;
    double amount;
};

class User
{
public:
    User(std::string newName);
    User(std::string newName, double newAssets);
    User(std::string newName, double newAssets, Revenue newRevenue);
    
    void printUser(); //for testing

private:
    std::string name;
    double assets;
    unsigned int revenue_map_index;
    std::map<int, Revenue> revenue_map;
};

User::User(std::string newName)
    : name(newName), assets(0), revenue_map_index(0) {}

User::User(std::string newName, double newAssets)
    : name(newName), assets(newAssets), revenue_map_index(0) {}

User::User(std::string newName, double newAssets, Revenue newRevenue)
    : name(newName), assets(newAssets), revenue_map_index(0)
    {
        this->revenue_map[revenue_map_index] = newRevenue;
    }

void User::printUser()
{
    std::cout << this->name << std::endl;
    std::cout << "Assets: " << this->assets << std::endl;
    std::cout << "Revenue: " << std::endl;
    for (std::size_t i = 0; i < this->revenue_map.size(); ++i)
    {
        std::cout << this->revenue_map[i].message << " " << this->revenue_map[i].amount << std::endl;
    }
}