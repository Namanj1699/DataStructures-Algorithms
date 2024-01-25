// collection of similar data elements

#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    cout<<"Hello World"<<endl;

    int arr[10]={0};

    int a[5] = {2,4,6,8,10};
    int temp;
    for(int x : arr)
    {
        printf("%d ",x);
    }

    printf("%d\n",a[4]);
    printf("%d",sizeof(temp));
    return 0;
}