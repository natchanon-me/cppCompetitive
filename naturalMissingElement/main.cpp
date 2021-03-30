#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//One missing
void findOneMissing(vector<int> arr){
    int arrSum = 0, correctSum, n = arr.size(), last = arr[n-1], first = arr[0];
    for(int x : arr) {
        arrSum += x;
    }
    correctSum = ((last*(last+1))/2) - (((first-1)*((first-1)+1))/2);
    cout << "Missing element is : " << correctSum - arrSum << endl;
}

//Multiple missing
// 6 7 8 9 11 12 15 16 17 18 19
//       ^ ^  ^  ^
// 0 1 2 3 4  5  6  7  8  9  10 <--- index
// 6 6 6 6 7  7  9  9  9  9  9  <--- diff
void findMulMissing(vector<int> arr){
    int diff = arr[0];
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i]-1 != diff) {
            while(diff < arr[i] - i){
                cout << "Missing element is : " << i+diff << endl;
                diff++;
            }
        }
    }
}

//Implementing for unsorted array
// ****Using Hash table tecnique****
//Always start at 1
void hashUnsorted(vector<int> arr) {
    vector<int> H(arr.size()+1, 0);
    for(int i = 0; i < arr.size(); i++) {
        H[arr[i]]++;
    }
    for(int i = 0; i < H.size(); i++) {
        if(i == 0) {
            continue;
        }
        if(H[i] == 0) {
            cout << "Missing element is : " << i << endl;
        }
    }
}


int main()
{
    findOneMissing({6,7,8,9,10,11,13,14,15,16,17});
    findMulMissing({6,7,8,9,11,12,15,16,17,18,19});
    hashUnsorted({3,7,4,9,12,6,1,11,2,10});
    return 0;
}
