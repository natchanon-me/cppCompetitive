#include <iostream>

using namespace std;

string addBinary(string a, string b) {
        int numA = std::stoi(a);
        int numB = std::stoi(b);
        string sum = "", ans = "";
        unsigned int sumInt = numA + numB, temp = 0;
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
    string ans = addBinary("1110110101", "1110111011");
    cout << ans << endl;
    return 0;
}
