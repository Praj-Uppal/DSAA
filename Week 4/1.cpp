#include <iostream>
using namespace std;

int partition(int low, int high, vector<int> v)
{

    int pivot = v[high];

    // rule1 => when (i<p)
    // rule2 => when (i>p)

    // return the partition according to the position of pivot
}

int quicksort(int low, int high, vector<int> v)
{
    if (low < high)
    {
        int part = partition(low, high, v);

        quicksort(low, part - 1, v);
        quicksort(part + 1, high, v);
    }
}
int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    quicksort(0, n - 1, v);
}