#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int reverse(int x) {
        int i = 0;
        bool checkForNeg = false;
        int ans = 0;

        while(x != 0) {
            int last_so_far = x % 10;
            x /= 10;
            if (ans > INT_MAX/10 || ans < INT_MIN/10) {
                return 0;
            }
            ans = ans * 10 + last_so_far;
        }

        return ans;
    }

int main()
{
    int x = reverse(901000);
    cout << x << endl;
    return 0;
}
