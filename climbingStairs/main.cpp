#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int RclimbingStairs(int n) {
    if(n == 1 || n == 0) {
        return 1;
    }else {
        return RclimbingStairs(n-1) + RclimbingStairs(n-2);
    }
}

int IteWithMemo(int n) {
    vector<int> memo{1,1};
    for(int i = 2; i <= n; i++) {
        int curr = memo[i-1] + memo[i-2];
        memo.push_back(curr);
    }
    return memo[n];
}

int dpClimbingStairs(int n){
    vector<int> dp(n+1);
    // Base case
    dp[0] = 1;
    dp[1] = 1;
    // ---------
    for(int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main()
{
    int ans = dpClimbingStairs(10);
    cout << ans << endl;
    return 0;
}
