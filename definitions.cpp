#include <iostream>
using namespace std;

int linearSearch(int charge[], const int SIZE, int value)
{
    int position = -1;
    int index = 0;
    bool found = false;

    while(index < SIZE && !found)
    {
        if (charge[index] == value)
        {
            position = index;
            found = true;
        }
        index ++;
    }
    return position;
}

int binarySearch(int charge[], const int SIZE, int value)
{
    int position = -1;
    bool found = false;
    int first = 0;
    int middle;
    int last = (SIZE-1);

    while(!found && first<=last)
    {
        middle = (first + last)/2;

        if (charge[middle] == value)
        {
            found = true;
            position = middle;
        }
        else if (charge[middle] > value)
            last = middle - 1;
            else
                first = middle + 1;
    }
    return position;
}


void selectionSort(int charge[], const int SIZE)
{
    int minIndex;
    int minValue;

    for(int start = 0; start < (SIZE-1); start++)
    {
        minIndex = start;
        minValue = charge[start];
        for(int index = (start + 1); index < SIZE; index ++)
        {
            if(charge[index]<minValue)
            {
                minValue = charge[index];
                minIndex = index;
            }
        }
        swap(charge[minIndex],charge[start]);
     }

}
