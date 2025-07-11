#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string removeDups(string &s) {
        // Your code goes here
        vector<int> mp(26, 0);
        string ans = "";

        for(int i = 0; i<s.length(); i++){
            if(mp[s[i]-'a']) continue;
            mp[s[i]-'a']++;
            ans+=s[i];
        }
        return ans;
    }
};

int main(){
    string str;
    cin>>str;
    Solution obj;
    cout<<obj.removeDups(str);

    return 0;
}