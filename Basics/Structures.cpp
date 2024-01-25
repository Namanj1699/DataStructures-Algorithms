/*collections of data member under one name whether member can be similar or
di-similar types*/

#include<iostream>
#include<stdio.h>

using namespace std;

struct employee
{
    int emp_id;
    char emp_name[40];
    char designation[20];
};

int main()
{
    struct employee emp_rec[2] = 
        {
        {2241862,"Naman_Jain","SystemEngineer"},
        {2233447,"Tanmeya_Kansal","SystemEngineer"}
        };
    
    for(int i=0;i<2;i++)
    {
        printf("Here is the details of Employee %d\n\n",i+1);
        
        printf("Employee id is : %d\n",emp_rec[i].emp_id);
        printf("Employee Name  : %s\n",emp_rec[i].emp_name);
        printf("Designation    : %s\n",emp_rec[i].designation);

        printf("\n\n");

    }
    return 0;
}