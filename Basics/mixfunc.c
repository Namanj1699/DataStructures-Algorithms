//functions
//call by value,call by address,call by reference[cbv,cba,cbr]
#include<stdio.h>
#include <iostream>

void cbv(int a,int b) //function declaration/prototype
{
    int c;     //function definition
    c=a;
    a=b;
    b=c;
}

void cba(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

void cbr(int &a,int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
}

int main()
{
    int x=10;
    int y=20;
    printf("Before function call value of x is %d and y is %d\n\n",x,y);
    // cbv(x,y);
    // cbr(x,y);
    // cba(&x,&y);
    
    printf("After function call value of x is %d and y is %d\n\n",x,y);
    
    return 0;

}