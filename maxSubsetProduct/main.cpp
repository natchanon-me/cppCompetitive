#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int multiplication(vector<int> arr) {
    int refer = 0;
    long Presult = 1;
    long Nresult = 1;
    std::sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); ++i) {
         cout << arr[i] << endl;
    }
    if (arr.size() == 2) {
        return arr[0]*arr[1];
    }

    if (arr[0] >= 0) {
        for (int i = 0; i < arr.size(); ++i) {
            if (arr[0] == 0) {
                continue;
            }
            Presult *= arr[i];
        }
        return Presult;
    }

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] * arr[i+1] <= 0) {
            refer = i + 1;
            cout << refer << endl;
            break;
        }
    }

    for (int p = refer; p < arr.size(); ++p) {
        if (arr[p] == 0) {
            continue;
        }
        cout << arr[p] << endl;
        Presult *= arr[p];
        cout << ":::::" << Presult << endl;
    }

    for (int n = refer - 1; n >= 0; --n) {
        Nresult *= arr[n];
        cout << ":::::" << Nresult << endl;
    }
    if ((arr[arr.size()-1] != 0 || arr[arr.size()-1] == 0) && arr[arr.size()-2] == 0 && refer == 1) {
        return 0;
    }
    cout << Presult << "********" << endl;
    cout << Nresult << "********" << endl;
    cout << (Presult*Nresult) << "********" << endl;
    if (Presult * Nresult < 0) {
        Nresult /= arr[refer-1];
        cout << (Presult*Nresult) << "********" << endl;
        return Presult*Nresult;
    }else if (Presult * Nresult > 0) {
        return Presult*Nresult;
    }else {
        cout << ":::::" << Presult << endl;
        return Presult;
    }
}

int main()
{
    long ans = multiplication({2, 2, 0, 1, -1, 2, 1, 2, 2, 0, -1, 1, 0, -2, 1, -2, 2, -2,
                              0, -1, 0, -2, -2, -2, 2, -1, -2, 2, 1, 0, -2, 2, 2, 1, 2,
                              0, 1, 2, 1, -1, -1, -2, 2, 0, -1, -2, 1, 0, 1, -1, 0, 0, 0,
                               2, -1, -1, -1, 0, 2, 2, 0, 0, -2, -2, -1, -2, -1, -2, -2,
                               0, -2, -1, 2, 1, -1, 2, -2, 1, -1, -2, 2, -1, -1, -2, 1, 2
                               , -2, -2, 1, -1, 2, 0, -2, 0, 0, 0, -2, -1, 0, 1});
    cout << ans << endl;
    return 0;
}
