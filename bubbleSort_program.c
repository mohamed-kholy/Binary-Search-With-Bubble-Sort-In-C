#include <stdio.h>
#include "STD_TYPES.h"
#include "bubbleSort_interface.h"

// Function that Takes Pointer to Array and it's Size to Sort Them
  void bubbleSort (u32 *ptrToArray , u8 arraySize)
  {
      // First Loop that loops on Every Element in the array
      for (u8 i=0 ; i< arraySize-1 ; i++ )
      {
          for (u8 j=0 ; j<arraySize-i-1 ; j++)
          {
              // if the current element bigger than the next element then swap them
              if (*(ptrToArray+j+1) < *(ptrToArray+j))
              {
                  // call swap function
                   swap((ptrToArray+j) ,(ptrToArray+j+1)) ;
              }
          }
      }

  }
  // function that could swap two elements in array
  void swap (u32 *ptr_first , u32 *ptr_second)
  {
      u8 u8_localTemp = *ptr_second ;
      *ptr_second = *ptr_first ;
      *ptr_first = u8_localTemp ;

  }
    // function that check if the array is Sorted or no
  u8 sorted (u32 *arr , u8 arraySize )
{
    // in case of the array has one or no elements
    if ((arraySize == 0 )||(arraySize == 1))
        return 1 ;
        // otherwise
    else
    {
        for (u8 i =1 ; i < arraySize ; i++ )
        {
            if (*(arr+i-1) > *(arr+i))
                return 0 ;
        }
    }
    return 1 ;
}

