#include <stdio.h>
#include "STD_TYPES.h"
#include "bubbleSort_interface.h"
#include "binarySearch_interface.h"


u8 binarySearch (u32 *arr , u8 arraySize , u32 num)
{
    // local Variable That Holds The Median Index
    u8 u8_localMid = 0 ;
    // local Variable that holds the Start Index
    u8 u8_localStartIndx = 0 ;
    // local variable that holds the index of the last element in the array
    u8 u8_localEndIndx = arraySize -1 ;
    // in case of the array not sorted
     if (sorted(arr ,arraySize )== 0)
    {
        bubbleSort(arr, arraySize) ;
    }

    while (u8_localStartIndx <= u8_localEndIndx)
    {
        // get the median
        u8_localMid = (u8_localStartIndx + u8_localEndIndx) / 2 ;
        // if the searching number is founded in median
        if (num == *(arr + u8_localMid) )
        {
            return u8_localMid ;
        }
        // if the searching number is founded in the second have of the array
        if (num > *(arr + u8_localMid))
        {
            // Change the Start Index
            u8_localStartIndx = u8_localMid + 1 ;
        }
        // other wise
        else
        {
            // Change the End Index
            u8_localEndIndx = u8_localMid - 1 ;
        }
    }
    return 0 ;

}

