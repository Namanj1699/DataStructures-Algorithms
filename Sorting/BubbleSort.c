//programme for bubble_sort

// Time Complexity

// Best case - o(n)
// Worst case - o(n2)

#include<stdio.h>

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[ ],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int flag = 0;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                flag++;
            }
        }
        
        if(flag==0)
        {
            break;
        }
    }
}

int main()
{
    int arr[ ] = {1,3,7,8,8};
    
    bubbleSort(arr,5);
    
    for(int i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}