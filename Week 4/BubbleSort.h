#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "sort.h"

using namespace std;

class BubbleSort : public Sort
{
public:
    vector<int> sort(vector<int> list)
    {
        for (size_t i = 0; i < list.size(); i++)
        {
            size_t swapCount = 0;
            for (size_t j = 1; j < (list.size()); j++)
            {
                if (list[j] < list[j - 1])
                {
                    // swap
                    int temp = list[j];
                    list[j] = list[j - 1];
                    list[j - 1] = temp;
                    swapCount++;
                }
            }
            if (swapCount == 0)
            {
                return list;
            }
        }
        return list;
    }
};

#endif