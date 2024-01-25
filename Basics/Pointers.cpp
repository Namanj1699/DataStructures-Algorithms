#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("Hello Pointer\n");
    int a=10;
    int *p = &a;

    //allocating memory in heap for that we use the concept of malloc

    int *pnt;
    pnt = (int *)malloc(5*sizeof(int));
    printf("%d",pnt);
    return 0;
}