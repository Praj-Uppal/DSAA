#include "BubbleSort.h"
#include "QuickSort.h"

using namespace std;

int main(void)
{

    vector<int> list = {1, 4, 78, 9, 2, 3, 4, 5, 1};

    BubbleSort sorter;
    QuickSort quickSorter;

    vector<int> result = sorter.sort(list);
    vector<int> result2 = quickSorter.sort(list);

    for (size_t i = 0; i < result.size(); i++)
    {
        cout << result[i] << "\n";
    }

    for (size_t i = 0; i < result2.size(); i++)
    {
        cout << result2[i] << "\n";
    }
}