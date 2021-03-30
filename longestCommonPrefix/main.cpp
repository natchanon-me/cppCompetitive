#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 /*string longestCommonPrefix(vector<string> strs) {
    string pref = "";
    int cnt = 0;
    bool flag = true;
    if(strs.size() == 0) {
        return "";
    }
    while(flag) {
        bool firstIteration = true;
        for(string s : strs) {
            if (s[cnt] == 0) {
                break;
            }
            if (s == "") {
                return "";
            }

            if (s[cnt] == pref[cnt]) {
                continue;
            }else if (s[cnt] != pref[cnt] && firstIteration == false) {
                flag = false;
                break;
            }
            pref += s[cnt];
            firstIteration = false;
        }
        if(strs.size() == 1) {
            return pref;
        }
        cnt++;
    }
    cout << pref << endl;
    pref.erase(pref.begin()+(pref.length()-1));
    return pref;
}*/

string longestCommonPrefix(vector<string> strs) {
    int n = strs.size();
    string pref = strs[0];
    cout << n << endl;
    if(n == 0) {
        return "";
    }

    for(int i = 1; i < n; i++) {
            int x = strs[i].find(pref);
            cout << i << " : " << x << endl;
        while(strs[i].find(pref) != 0) {
            // find = 0 mean the entire string strs[i] found in pref
            pref = pref.substr(0, pref.length() - 1);
            cout << i << " : " << pref << endl;
            if(pref.empty()) {
                return "";
            }
        }
    }
    return pref;
}

int main()
{
    string ans = longestCommonPrefix({});
    cout << ans << endl;
    return 0;
}
