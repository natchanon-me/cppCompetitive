#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*int countingElems(vector<int> arr) {
    unordered_set<int> s;
    int cnt = 0;
    for(int x : arr) {
        s.insert(x);
    }

    for(int x : arr) {
        if(s.count(x+1) == 1) {
            cnt++;
        }
    }
    return cnt;
}*/

int countingElems(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int cnt = 0;
    int prv_count = 0, prv = -1;
    for(int x : arr) {
        if (x == prv) {
            prv_count++;
        }else {
            if(x == prv+1) {
                cnt += prv_count;
            }
            prv = x;
            prv_count = 1;
        }
    }
    return cnt;
}

int main()
{
    int ans = countingElems({1,2,3,4,10,8,5,4,6,7,9,8,4,2,1,3,5,4,7,8,4,1,3,5,7,8,9,4,5,11,12,13,14,15,16,17,20,21,23,25,22,24,26,28,27,2,29,30});
    cout << ans << endl;
    return 0;
}
