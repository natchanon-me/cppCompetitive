#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void Merge(vector<int> arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    //Temp array
    int L[n1], R[n2];
    //Copy data to temp array
    for (int i = 1; i < n1; i++) {
        L[i] = arr[l+i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[m+1+j];
    }

}

void mergeSort(vector<int> arr, int l, int r) {
    if(l>=r) {
        return;
    }
    int m = l+(r-l)/2;
    mergeSort(arr, l, m);
    mergeSort(arr, m+1, r);
    Merge(arr, l, m, r);
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
