#include<bits/stdc++.h>
using namespace std;

bool areIsomorphic(string &s1, string &s2) {

    // Your code here
    unordered_map<char, int> mp1, mp2;
    int n1 = s1.size(), n2 = s2.size();
    
    if(n1 != n2) return 0;
    
    for(char ch:s1) mp1[ch]++;
    for(char ch:s2) mp2[ch]++;
    
    for(int i = 0; i<n1; i++)
        if(mp1[s1[i]] != mp2[s2[i]]) return 0;
    return 1;
}

vector<string> findMatchedWords(int n, vector<string> dict, string pattern) {
    // Your code here
    vector<string> ans;
    for(string str:dict) if(areIsomorphic(str, pattern)) ans.push_back(str);
    return ans;
}

int main(){
    int n;  cin>>n;
    string pattern; cin>>pattern;

    vector<string> dict(n);
    for(int i = 0; i<n; i++) cin>>dict[i];

    vector<string> ans = findMatchedWords(n, dict, pattern);
    for(auto it: ans) cout<<it<<" ";
    cout<<endl;

    return 0;
}