#include <iostream>
#include "select_sort.h"
using namespace std;

void selectSort(int a[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIdx = i;
        int minVal = a[i];
        for (int j = i + 1; j < size; j++) {
            if (a[j] < minVal) {
                minIdx = j;
                minVal = a[j];
            }
        }
        if (minIdx != i) {
            a[minIdx] = a[i];
            a[i] = minVal;
        }
        cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < size; k++) cout << a[k] << " ";
        cout << endl;
    }
}