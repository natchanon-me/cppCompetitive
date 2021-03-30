#include <iostream>
#include <bits/stdc++.h>

using namespace std;

 bool isValid(string s){
       stack<char> st;

       for(int i = 0; i < s.size(); i++) {
           if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
               st.push(s[i]);
           }else if(s[i] == ')' || s[i] == ']' || s[i] == '}') {
               if(st.empty()) return false;
               else if(abs(s[i] - st.top()) > 2) {
                   return false;
               }
               st.pop();
           }
       }

        if (st.empty())
		    return true;
	    else
		    return false;
/*bool isValid(string s){
    if(s.length()%2 != 0) {
        return false;
    }
cout << s << endl;
    for (int i = 0; i < s.length(); i++) {
        if((s[i] == '(' && s[i+1] == ')') || (s[i] == '[' && s[i+1] == ']') || (s[i] == '{' && s[i+1] == '}')){
            s.erase(s.begin()+i, s.begin()+(i+2));
            i = -1;
        }
    }

    if(s.empty()) {
        return true;
    }else {
        return false;
    }*/
}

int main()
{
    bool ans = isValid("(]");
    cout << ans << endl;
    return 0;
}
