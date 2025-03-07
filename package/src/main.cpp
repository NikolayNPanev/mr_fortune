#include "lib/outside/outside_header.h"
#include "int/user/user.h"

void testPrintUser()
{
    Revenue ivanGetsPaid;
    ivanGetsPaid.amount = 100;
    ivanGetsPaid.message = "testing payment Ivan";
    User ivan("Ivan Ivanov", 100, ivanGetsPaid);
    Revenue kolyoGetsPaid;
    kolyoGetsPaid.amount = 150;
    kolyoGetsPaid.message = "testing payment Kolyo";
    User kolyo("Kolyo Kolev", 150, kolyoGetsPaid);
    ivan.printUser();
    kolyo.printUser();
}

int main() 
{
    testPrintUser();
    return 0;
}