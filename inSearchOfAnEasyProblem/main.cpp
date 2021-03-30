#include <iostream>

using namespace std;

int main()
{
//    int n = 0;
//    int p = 0;
//    int sum = 0;
//    cin >> n;
//    int array[n];
//
//    for(int i = 0; i < n; ++i) {
//
//        cin >> p;
//        array[i] = p;
//    }
//
//    for(int i = 0; i < n; ++i) {
//        sum += array[i];
//    }
//
//    if (sum == 0) {
//        cout << "EASY" << endl;
//    }else {
//        cout << "HARD" << endl;
//    }

    int n;
    cin >> n;

    int isMax = 0;
    for(int i = 0; i < n; ++i) {
        int ans;
        cin >> ans;
        isMax = max(isMax, ans);
    }

    puts(isMax > 0 ? "HARD" : "EASY");

    return 0;
}
