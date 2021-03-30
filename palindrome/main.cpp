#include <iostream>

using namespace std;

 bool isPalindrome(int x) {
        int palin = 0, last_digit = 0, temp = x;
        if (x < 0) {
            return false;
        }
        while(temp != 0) {
            last_digit = temp % 10;
            temp /= 10;
            palin = palin * 10 + last_digit;
        }
        if (palin == x) {
            return true;
        }else {
            return false;
        }
    }

int main()
{
    bool fact = isPalindrome(121);
    cout << fact << endl;
    return 0;
}
