#include <iostream>

using namespace std;

int main()
{
    string a;
    string temp;
    string compare;
    bool flag = false;

    cin >> a;

    for (int i = 0; i < a.size(); ++i) {
        for (int j = i+1; j < a.size(); ++j) {
            int k = i;
            int l = j;
            while (a[k] == a[l]) {
                /*if((a[k+1] != a[l+1])){
                    break;
                }*/
                temp += a[k];
                k++;
                l++;
            }
            if (flag == false) {
                compare = temp;
                flag = true;
            }

            if (temp.size() > compare.size()) {
                compare = temp;
            }
            temp = "";
        }
    }

    if (compare.size() == 0) {
        cout << "Not Found";
    }else {
        cout << compare;
    }

}
