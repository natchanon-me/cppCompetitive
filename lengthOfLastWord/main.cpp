#include <iostream>

using namespace std;

int lengthOfLastWord(string s) {
        string lastWord = "";
        bool finalWord = false;
        for(int i = 0; i < s.length(); i++) {
            cout << s[i] << endl;
            if (s[i] == ' ') {
                for(int j = i+1; j < s.length(); j++) {
                    lastWord += s[j];
            cout << " : " << s[j] << endl;
                    if(s[j] == ' ') {
                        lastWord = "";
                        break;
                    }else{
                        finalWord = true;
                    }
                }
                if(finalWord == true) {
                    break;
                }
            }
        }
        return lastWord.length();
    }

int main()
{
    int ans = lengthOfLastWord("Hello World from few");
    cout << ans << endl;
    return 0;
}
