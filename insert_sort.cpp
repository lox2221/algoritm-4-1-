#include <iostream>
#include "insert_sort.h"
using namespace std;

void insertSort(int a[], int size) {
    for (int i = 1; i < size; i++) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
        cout << "Pass " << i << ": ";
        for (int k = 0; k < size; k++) cout << a[k] << " ";
        cout << endl;
    }
}