#include<stdio.h>
#include<iostream>

void rec(int n)
{
    // if(n>0)
    // {
    //     printf("%d",n); //calling phase also known as ascending phase
    //     rec(n-1);
    // }
    
    if(n>0)
    {
        rec(n-1);
        printf("%d",n); //returning phase also known as descending phase
    }
}

int main()
{
    rec(5);
    return 0;
}