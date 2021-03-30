#include <iostream>

using namespace std;

int main()
{
    string a[10000];
    int n;

    cin >> n;

    for (int i = 1; i <= n; ++i) {

        if (i % 2 == 0) {
            a[i] = "I love";
        }else {
            a[i] = "I hate";
        }

        if (n-i > 0) {
            cout << a[i] << " that ";
        }else {
            cout << a[i] << " it";
        }
    }
    return 0;
}
