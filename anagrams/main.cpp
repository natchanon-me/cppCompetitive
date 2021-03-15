#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string> strs) {
        unordered_map<string, vector<string>> m;
        for (string s : strs) {
            string s_temp = s;
            sort(s_temp.begin(), s_temp.end());
            m[s_temp].push_back(s);
        }
        vector<vector<string>> ans;
        for (auto m_elem : m) {
            ans.push_back(m_elem.second);
        }
        return ans;
    }

int main()
{
    vector<vector<string>> an = groupAnagrams({"eat", "tea", "tan", "ate", "nat", "bat"});
    cout << "*****" << endl;
    for (vector<string> ss : an) {
        for (string sss : ss) {
            cout << sss << endl;
        }
        cout << "*****" << endl;
    }
    return 0;
}
