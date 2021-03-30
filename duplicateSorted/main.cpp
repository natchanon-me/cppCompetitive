#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int temp = nums[0],cnt = 1, n = nums.size();
    for(int i = 1; i < n; i++) {
        if(nums[i] != temp) {
            nums[cnt] = nums[i];
            temp = nums[i];
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    vector<int> testcase = {1,1,2,2,3,3,4,4};
    int len = removeDuplicates(testcase);
    cout << len << endl;
    return 0;
}
