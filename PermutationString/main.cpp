#include <iostream>

using namespace std;

void perm(string& s, int k) {
    static int a[10];
    static string res = s;
    int i;
    if(k == res.length()){
        cout << endl;
        cout << res << endl;
    }else{
        for(i = 0; i < s.length(); i++) {
            if(a[i] == 0){
                res[k] = s[i];
                cout << res[k] << " ";
                a[i] = 1;
                perm(s, k+1);
                a[i] = 0;
            }
        }
    }
}

int main()
{
    string s = "ABC";
    perm(s, 0);
    return 0;
}
