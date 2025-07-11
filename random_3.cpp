#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string &s) {
        // code here
        stringstream ss(s);
        string ans, word ="";
        while(ss>>word) ans = word + " " + ans;
        if(!ans.empty()) ans.pop_back();
        return ans;
    }
};

int main(){
    string s;
    cin>>s;
    Solution obj;
    cout<<obj.reverseWords(s);
    return 0;
}
/*
"i like this program very much" 
*/