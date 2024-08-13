#pragma once
#include "INC/OUT/outside_header.h"

struct Revenue {
    std::string message;
    double amount;
};

enum class ModifyAssetsType
{
    None = -1,
    ADD, //add assets
    SUB //subtract assets 
};

class User
{
public:
    User(std::string newName);
    User(std::string newName, double newAssets);
    User(std::string newName, double newAssets, Revenue newRevenue);
    
    std::string getName() const;
    double getAssets() const;
    Revenue operator[](unsigned int index);

    void add_revenue(double value, std::string revenueMessage);
    void sub_revenue(double value, std::string revenueMessage);

    void printUser(); //for testing

private:
    void modifyAssets(double value, ModifyAssetsType operand);
    bool isValueValid(double value) const;

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

std::string User::getName() const
{
    return this->name;
}

double User::getAssets() const
{
    return this->assets;
}

Revenue User::operator[](unsigned int index)
{
    if (index >= this->revenue_map.size()) {
        throw "Invalid argument for revenue_map index\n";
    }
    return this->revenue_map[index];
}

void User::modifyAssets(double value, ModifyAssetsType operand)
{
    switch(operand) {
        case ModifyAssetsType::ADD:
            this->assets += value;
            break;
        case ModifyAssetsType::SUB:
            this->assets -= value;
            break;
        default:
            return;
    }
}

void User::add_revenue(double value, std::string revenueMessage)
{
    if (this->isValueValid(value) == false) {
        std::cout << "invalid argument for value in add_revenue" << std::endl;
    }
    else {
        this->modifyAssets(value, ModifyAssetsType::ADD);
        Revenue newRevenue;
        newRevenue.amount = value;
        newRevenue.message = revenueMessage;
        this->revenue_map_index++;
        this->revenue_map[this->revenue_map_index] = newRevenue;
    }
}

void User::sub_revenue(double value, std::string revenueMessage)
{
    if (this->isValueValid(value) == false) {
        std::cout << "invalid argument for value in sub_revenue" << std::endl;
    }
    else {
        this->modifyAssets(value, ModifyAssetsType::SUB);
        Revenue newRevenue;
        newRevenue.amount = value;
        newRevenue.message =revenueMessage;
        this->revenue_map_index++;
        this->revenue_map[this->revenue_map_index] = newRevenue;
    }
}

bool User::isValueValid(double value) const
{
    if (value <= 0) {
        return false;
    }
    return true;
}