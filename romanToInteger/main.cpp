#include <iostream>
#include <bits/stdc++.h>

using namespace std;

 int romanToInt(string s) {
        int ans = 0, temp = 0, check = INT_MAX;

        for (char c : s) {
           if(c == 'I') {
               temp = 1;
           }else if(c == 'V'){
               temp = 5;
           }else if(c == 'X'){
               temp = 10;
           }else if(c == 'L'){
               temp = 50;
           }else if(c == 'C'){
               temp = 100;
           }else if(c == 'D'){
               temp = 500;
           }else if(c == 'M'){
               temp = 1000;
           }else {
               return 0;
           }
            ans += temp;
            if (temp > check) {
                ans = ans - 2*check;
            }

            check = temp;
        }
        return ans;
    }

int main()
{
    int ss = romanToInt("MCMXCIV");
    cout << ss << endl;
    return 0;
}
