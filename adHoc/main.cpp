#include <iostream>

using namespace std;


int costToMakeEqual(string a, string b) {
    int cost = 0;

    for(int i = 0; i < a.size(); ++i) {
        if (a[i] == b[i]) {
            cout << a[i];
            continue;
        }else if (a[i] != b[i] && a[i+1] != b[i+1] && a[i+1] != a[i+1]){
            int store = 0;
            store = a[i+1];
            a[i+1] = a[i];
            a[i] = store;
            cost++;
            cout << a[i];
        }else {
            a[i] = b[i];
            cost++;
            cout << a[i];
        }

        if (a == b) {
            break;
        }
    }

    return cost;
}

int main()
{
    int result = costToMakeEqual("10101011011000101110011000101001010100010110001010",
                                 "00011101111111111000000010101010101011111100101111");
    cout << "\n" << result << endl;
    return 0;
}

