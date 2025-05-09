#include <iostream>
#include <cstdlib>
#include <ctime>
#include "insert_sort.h"
using namespace std;

#define N 29

int main() {
    int a[N];
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        a[i] = rand() % 321 - 160; // -160 to 160
        cout << "a[" << i << "] = " << a[i] << endl;
    }
    cout << "\nSorting process:\n";
    insertSort(a, N);
    cout << "\nSorted array:\n";
    for (int i = 0; i < N; i++) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }
    return 0;
}