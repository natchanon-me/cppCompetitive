#include <iostream>

using namespace std;

int function(int n) {
        int sum = 0;
        int i = 0;
        if (n == 1) {
            return n;
        }
        while(n != 1) {
            while(n > 9) {
                int digit = n % 10;
                cout << digit <<endl;
                n /= 10;
                cout << n <<endl;
                sum += digit * digit;
                cout << sum <<endl;
            }
            sum += (n*n);
            if (sum == 1) {
                return sum;
            }
            if (i == 100) {
                break;
            }
            cout << sum <<endl;
            n = sum;
            sum = 0;
            i++;
            cout << n <<endl;
        }
        return -1;
}

int main() {

        int result = function(1);
        if (result == 1) {
            cout << "true";
        }else {
            cout << "false";
        }

    return 0;
}
