#include<stdio.h>

void selectionSort(int arr[ ],int n)
{
    for(int i=0; i<n-1; i++)
    {
        int mini = i;
        
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]< arr[mini])
            {
                mini = j;
            }
        }
        
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int n;
    
    printf("Enter the array size :");
    scanf("%d",&n);
    
    int arr[n];
    
    printf("Enter elements :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Before Sorting :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    //function calling
    selectionSort(arr,n);
    
    printf("\nAfter Selection Sort :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}