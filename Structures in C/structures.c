#include <stdio.h>
#include <string.h>

// struct employee
// {
//     int srNo;
//     float salary;
//     char name[50];
// };


// int main()
// {
//     struct employee e1;
//     e1.srNo = 101;
//     e1.salary = 30000.00;
//     strcpy(e1.name, "Lakshaya Sharma");
    
//     printf("Name of the person: %s\n", e1.name);
//     printf("Sr No.: %d\n", e1.srNo);
//     printf("Salary: %.2f\n", e1.salary);

//     return 0;
// }

// *********************** STRUCTURES USING ARRAY ***************
// struct employee
// {
//     int srNo;
//     float salary;
//     char name[50];
// };

// int main()
// {
//     struct employee facebook[100];
//     facebook[0].srNo = 101;
//     facebook[0].salary = 30000.00;
//     strcpy(facebook[0].name, "Lakshaya Sharma");
    
//     printf("Name of the person: %s\n", facebook[0].name);
//     printf("Sr No.: %d\n", facebook[0].srNo);
//     printf("Salary: %.2f\n", facebook[0].salary);

//     return 0;
// }

// struct employee
// {
//     int srNo;
//     float salary;
//     char name[50];
// };

// int main()
// {
//     struct employee Lakshaya = {101, 300000, "Lakshaya Sharma"};
    
//     printf("Name of the person: %s\n", Lakshaya.name);
//     printf("Sr No.: %d\n", Lakshaya.srNo);
//     printf("Salary: %.2f\n", Lakshaya.salary);

//     return 0;
// }

// *********************** STRUCTURES USING POINTERS ***************
// struct employee
// {
//     int srNo;
//     float salary;
//     char name[50];
// };

// int main()
// {
//     struct employee e1;
//     struct employee *ptr = &e1;

//     strcpy((*ptr).name, "Lakshaya Sharma");
//     ptr -> srNo = 101; 
//     ptr -> salary = 300000; 
    
//     printf("Name of the person: %s\n", (*ptr).name);
//     printf("Sr No.: %d\n", ptr->srNo);
//     printf("Salary: %.2f\n", ptr->salary);

//     return 0;
// }

// *********************** STRUCTURES USING FUNCTIONS ***************
// struct employee
// {
//     int srNo;
//     float salary;
//     char name[50];
// };

// void show(struct employee e1)
// {
//     e1.srNo = 101; 
//     e1.salary = 300000; 
//     strcpy(e1.name, "Lakshaya Sharma");
    
//     printf("Name of the person: %s\n", e1.name);
//     printf("Sr No.: %d\n", e1.srNo);
//     printf("Salary: %.2f\n", e1.salary);
// }

// int main()
// {
//     struct employee e1;
//     struct employee *ptr = &e1;

//     show(*ptr);

//     return 0;
// }

// struct employee
// {
//     int srNo;
//     float salary;
//     char name[50];
// };

// void show(struct employee *ptr)
// {
//     ptr->srNo = 101; 
//     ptr->salary = 300000; 
//     strcpy(ptr->name, "Lakshaya Sharma");
    
//     printf("Name of the person: %s\n", ptr->name);
//     printf("Sr No.: %d\n", ptr->srNo);
//     printf("Salary: %.2f\n", ptr->salary);
// }

// int main()
// {
//     struct employee e1;

//     show(&e1);

//     return 0;
// }

// *********************** STRUCTURES USING TYPEDEF ***************
// typedef struct employee
// {
//     int srNo;
//     float salary;
//     char name[50];
// }emp;

// void show(emp e1)
// {
//     e1.srNo = 101; 
//     e1.salary = 300000; 
//     strcpy(e1.name, "Lakshaya Sharma");
    
//     printf("Name of the person: %s\n", e1.name);
//     printf("Sr No.: %d\n", e1.srNo);
//     printf("Salary: %.2f\n", e1.salary);
// }

// int main()
// {
//     emp e1;

//     show(e1);

//     return 0;
// }