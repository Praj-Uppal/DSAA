#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "sort.h"

using namespace std;

class QuickSort : public Sort
{
public:
    vector<int> sort(vector<int> list)
    {

        if (list.size() <= 1)
        {
            return list;
        }

        int pivot = list[list.size() - 1];

        size_t pivotIndex = 0;

        for (size_t i = 0; i < (list.size() - 1); i++)
        {
            if (list[i] <= pivot)
            {
                int temp = list[pivotIndex];
                list[pivotIndex] = list[i];
                list[i] = temp;
                pivotIndex++;
            }
        }

        list[list.size() - 1] = list[pivotIndex];
        list[pivotIndex] = pivot;
        vector<int> firstVec(list.begin(), list.begin() + (pivotIndex));
        vector<int> secondVec(list.begin() + pivotIndex + 1, list.end());

        vector<int> sortFirst = sort(firstVec);
        vector<int> sortSec = sort(secondVec);

        vector<int> result;
        result.insert(result.begin(), sortFirst.begin(), sortFirst.end());
        result.push_back(pivot);
        result.insert(result.end(), sortSec.begin(), sortSec.end());

        return result;
    }
};

#endif