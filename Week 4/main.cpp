#include "BubbleSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "SelectionSort.h"

using namespace std;

int main(void) {
  vector<int> list = {1, 4, 78, 9, 2, 3, 4, 5, 1};

  BubbleSort sorter;
  QuickSort quickSorter;
  MergeSort mergeSorter;
  InsertionSort insertionSorter;
  selectionSort selectionSorter;

  vector<int> result = sorter.sort(list);
  vector<int> result2 = quickSorter.sort(list);
  vector<int> result3 = mergeSorter.sort(list);
  vector<int> result4 = insertionSorter.sort(list);
  vector<int> result5 = selectionSorter.sort(list);

  for (size_t i = 0; i < result.size(); i++) {
    cout << result[i] << "\n";
  }
  for (size_t i = 0; i < result2.size(); i++) {
    cout << result2[i] << "\n";
  }
  for (size_t i = 0; i < result3.size(); i++) {
    cout << result3[i] << "\n";
  }
  for (size_t i = 0; i < result4.size(); i++) {
    cout << result4[i] << "\n";
  }
  for (size_t i = 0; i < result5.size(); i++) {
    cout << result5[i] << "\n";
  }
}