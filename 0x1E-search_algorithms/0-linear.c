#include <stdio.h>

int linear_search(int *array, size_t size, int value)
{
    size_t index = 0;
    if (!array)
    {
        return(-1);
    }
    while(index < size)
    {
        if(array[index] == value)
        {
            break;
        }
        index++;
    }
    if (index == size)
    {
        return(-1);
    }
    return index;
}