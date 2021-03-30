#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    int findMaxLength(vector<int>& nums);
};

int Solution::findMaxLength(vector<int>& nums) {
    vector<int> sum{0};
    unordered_map<int, int> h;
    int maxl = 0;
    for(int i=0; i < nums.size(); i++) {
        if(nums[i] == 0) {
            nums[i] = -1;
        }
    }

    for(int x : nums) {
        int acc = sum.back()+x;
        sum.push_back(acc);
    }

    for(int i=0; i < sum.size(); i++) {
        int x = sum[i];
        auto idx = h.find(x);
        if(idx != h.end()) {
            maxl = max(maxl, i-h[x]);
        }else{
            h[x] = i;
        }
    }
    return maxl;
}

int main()
{
    vector<int> test = {0,1,1,1,0,0,1,0,0};
    Solution testSolution;
    int ans = testSolution.findMaxLength(test);
    cout << ans << endl;
    return 0;
}
