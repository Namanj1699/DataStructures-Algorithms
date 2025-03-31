//finding duplicates inside sorted array.

// #include<stdio.h>

// void findDuplicate(int arr[ ],int n)
// {
//     int lastDuplicate = 0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==arr[i+1]&& arr[i]!=lastDuplicate)
//         {
//             printf("%d\n",arr[i]);
//             lastDuplicate=arr[i];
//         }
//     }
// }

// int main()
// {
//     int arr[ ] = {1,2,2,3,4,4,4,5};
    
//     findDuplicate(arr,5);
    
//     return 0;
// }

//finding duplicates inside un-sorted array...


// #include<stdio.h>

// void findDuplicates(int arr[ ],int n)
// {
// 	for(int i=0; i<n-1; i++)
// 	{
// 		int count = 0;

// 		if(arr[i]!=-1)
// 		{
// 			for(int j=i+1; j<n; j++)
// 			{
// 				if(arr[i]==arr[j])
// 				{
// 					count++;
// 					arr[j] = -1;
// 				}
// 			}
// 		}

// 		if(count>0)
// 		{
// 			printf("duplicate element %d occurs %d times\n",arr[i],count);
// 		}

// 	}
// }

// int main()
// {
// 	int arr[ ] = {8,5,1,2,9,3,3,7,1,1,1};
// 	findDuplicates(arr,11);
// 	return 0;
// }