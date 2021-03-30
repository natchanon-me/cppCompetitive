#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string addBinary(string a, string b) {
       if(a == "0" && b == "0") return "0";
        unsigned long long int numA = a[0] - '0';
        unsigned long long int numB = b[0] - '0';
       for(int i = 1; i < a.size(); i++) {
           numA *= 10;
           numA += a[i] - '0';
       }
       for(int i = 1; i < b.size(); i++) {
           numB *= 10;
           numB += b[i] - '0';
       }
       cout << numA << endl;
       cout << numB << endl;
        string sum = "", ans = "";
        unsigned long long int sumInt = numA + numB;
        int temp = 0;
        while(sumInt != 0) {
            temp = sumInt%10;
            sumInt /= 10;
            if (temp == 0) {
                sum += '0';
            }else if(temp == 1) {
                sum += '1';
            }else if(temp == 2) {
                sum += '0';
                sumInt++;
            }else if(temp == 3) {
                sum += '1';
                sumInt++;
            }
        }
        for (int i = sum.length()-1; i >= 0; i--){
            ans += sum[i];
        }
        return ans;
    }

int main()
{
    string ans = addBinary("10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101","110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011");
    cout << ans << endl;
    return 0;
}
