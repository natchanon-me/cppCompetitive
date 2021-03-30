#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

//KADANE's ALGOROTHM//
int maxSubArray(vector<int> nums) {
    int sum = INT_MIN;
    int a = 0;

    for (int x : nums) {
        a += x;
        sum = max(sum, a);
        a = max(a, 0);
    }
    return sum;
}


int main()
{
    int ans = maxSubArray({-2,1,-3,4,-1,2,1,-5,4});
    cout << ans << endl;
    return 0;
}
