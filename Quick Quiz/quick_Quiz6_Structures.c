#include <stdio.h>

/*
    Ques1. W.a.p to store the details of 3 employees from user defined data. Use the 
    structure declared above. 
*/

struct employee
{
    int srNo;
    float salary;
    char name[50];
};

int main()
{
    struct employee e1,e2,e3;
    e1.srNo = 101;
    e1.salary = 30000.00;
    strcpy(e1.name, "Lakshaya Sharma");

    e2.srNo = 102;
    e2.salary = 30000.00;
    strcpy(e2.name, "Ritik Sharma");

    e3.srNo = 103;
    e3.salary = 30000.00;
    strcpy(e3.name, "Nandini");

    return 0;
}