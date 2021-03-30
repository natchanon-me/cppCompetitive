#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> convert(int num) {
    vector<int> arr;
    int digit;
    while(num != 0) {
        digit = num % 10;
        num /= 10;
        arr.push_back(digit);
    }
    return arr;
}

string intToRoman(int num) {
    vector<int> arr = convert(num);
    string ss = "";
    for (int i = arr.size() - 1; i >= 0; i--) {
            int temp = arr[i] * pow(10, i);
            int check = 0;

            if(temp >= 1000) {
                while (check != temp) {
                    check += 1000;
                    ss += "M";
                }
                continue;
            }else if(temp == 900) {
                ss += "CM";
                continue;
            }else if(temp >= 500 && temp < 900) {
                check = 500;
                ss += "D";
                while (check != temp) {
                    check += 100;
                    ss += "C";
                }
                continue;
            }else if(temp == 400) {
                ss += "CD";
                continue;
            }else if(temp >= 100 && temp < 400) {
                while (check != temp) {
                    check += 100;
                    ss += "C";
                }
                continue;
            }else if(temp == 90) {
                ss += "XC";
                continue;
            }else if(temp >= 50 && temp < 90) {
                check = 50;
                ss += "L";
                while (check != temp) {
                    check += 10;
                    ss += "X";
                }
                continue;
            }else if(temp == 40) {
                ss += "XL";
                continue;
            }else if(temp >= 10 && temp < 40) {
                while (check != temp) {
                    check += 10;
                    ss += "X";
                }
                continue;
            }else if(temp == 9) {
                ss += "IX";
                continue;
            }else if(temp >= 5 && temp < 9) {
                check = 5;
                ss += "V";
                while (check != temp) {
                    check += 1;
                    ss += "I";
                }
                continue;
            }else if(temp == 4) {
                ss += "IV";
                continue;
            }else if(temp < 4) {
                while (check != temp) {
                    check += 1;
                    ss += "I";
                    continue;
                }
            }
    }
    cout << ss << endl;
    return ss;
}


int main()
{
    intToRoman(600);
    return 0;
}
