//1. Write a program to find out the max number from given array using function
#include <stdio.h>

int findMax(int arr[], int n) 
{
    int max = arr[0],i; 
    for(i = 1; i < n; i++) 
	{
        if(arr[i] > max) 
		{
            max = arr[i]; 
        }
    }
    
    return max; // Return the maximum number
}

main() 
{
    int n,i;
    
    //Take input
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Accept the array elements from the user
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Find and print the maximum number using the findMax function
    int maxNumber = findMax(arr, n);
    printf("The maximum number is: %d\n", maxNumber);
    
}

