//pointer to structure..

#include<stdio.h>
#include<stdlib.h>

struct rectangle
{
    int length;
    int breadth;
}rec={5,10};
// struct rectangle rec={20,30};

#include<stdio.h>
int main()
{
    printf("Hello World!\n");
    
    // struct rectangle rec={10,20};
    // rec.length=10;
    // rec.breadth=20;
    
    // printf("%d",rec.length+rec.breadth);
    
    struct rectangle *ptr;
    ptr = (struct rectangle *)malloc(sizeof(struct rectangle));    
    
    ptr->length=20;
    ptr->breadth=40;
    
    printf("Value of length and breadth in heap is : %d and %d",ptr->length,ptr->breadth);
    
    return 0;
}