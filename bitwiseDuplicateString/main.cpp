#include <iostream>

using namespace std;

void dubString(string s) {
    long int H = 0, x = 0, mask = 0;

    for(char c : s) {
        x = 1;
        x = x << c-97;
        mask = x & H;
        if(mask > 0){
            cout << c << " is duplicate" << endl;
        }else {
            H = H | x;
        }
    }
}

int main()
{
    string s = "finding";
    dubString(s);
    return 0;
}
