#include "links/OUTSIDE"
#include "unmain.cpp"

struct revenue {
    std::string message;
    double amount;
};
std::map<int,revenue> revenue_map;

int main() {
    std::cout << "Hello, World!" << std::endl;
    revenue_map[1] = {"JKinti", 100.0};
    revenue_map[2] = {"JKinti2-electric boogaloo", 200.0};
    std::cout<<revenue_map.size()<<std::endl; 
    std::cout<<revenue_map[2].message<<std::endl; 
    std::cout<<revenue_map[2].amount<<std::endl; 
    return 0;
}