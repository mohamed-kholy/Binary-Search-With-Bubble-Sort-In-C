#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
#include "bubbleSort_interface.h"
#include "binarySearch_interface.h"



int main()
{
    // Variable holds the size of the array
    u8 arrSize  ;
    // Variable that holds the number that user wants to search
    u32 searchingNum ;
    // Ask the user to Enter size of the array
    printf("Enter Array Size : ") ;
    // get the Input from the user
    scanf("%d",&arrSize);
    // Create Array with the size that user define
    u32 arr[arrSize];
    // Clear the screen
    system("cls");
    // loop to take from the user every element to the array
    for (u8 i =0 ; i<arrSize; i++)
    {
        printf("Enter Element Number %d : " ,i+1 );
        scanf("%d",&arr[i]);
        system("cls");
    }
    // Call Bubble Sort Function to Sort the Array
    bubbleSort(arr,arrSize);
    // print the Array After Sorted
    printf("\nArray Elements After Sorted \n");
    for (u8 i=0 ; i<arrSize ; i++)
    {
        printf("%d " , arr[i]);
    }
    // Ask The User to Enter The Element he want to search
    printf("\nEnter The Element You Want to Search : ");
    // get the input from the user
    scanf("%d",&searchingNum);
    // call Binary Search Algorithm to Search the number
    u8 result = binarySearch(arr , arrSize , searchingNum );
    // in case of the number not founded
    if (result == 0)
    {
        printf("\n%d Element Is Not Founded \n" ,searchingNum ) ;
    }
    // otherwise
    else
    printf("\n%d Is Founded in Index %d",searchingNum , result);


    return 0;
}
