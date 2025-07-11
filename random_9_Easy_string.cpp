#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    bool sameLetter(string &str, int i){
        return ((str[i]-'a' == str[i-1]-'a') || (str[i]-'a' == str[i-1]-'A')
        || (str[i]-'A' == str[i-1]-'a') || (str[i]-'A' == str[i-1]-'A'));
    }
  //public:
    string transform(string S){
        //complete the function here
        string ans = "";
        int n = S.size();
        if(n == 1) {
            char ch = tolower(S[0]);
            ans = (ans+'1'+ch);
            return ans;
        }
        
        int sum = 0;
        int i = 1;

        
        while(i<n){
            char ch = tolower(S[i]);
            if(sameLetter(S, i)){
                sum = 1;
                while(i<n && sameLetter(S, i)){
                    sum++;
                    i++;
                }
                ans+=to_string(sum)+ch;
                continue;
            }
            else if(i+1 < n && sameLetter(S, i+1)) {
                i++;
                continue;
            }
            else ans = ( ans + '1' + ch);
            i++;
        }

        if(!sameLetter(S, 1)) {
            char ch = tolower(S[0]);
            string temp;
            temp.push_back('1');
            temp.push_back(ch);
            ans = temp+ans;
        }
        return ans;
    }
};

/*
aaABBb
aaacca
*/

int main(){
    int t;  cin>>t;
    while(t--){
        string S;   cin>>S;
        Solution obj;
        //string str = "aAb";
        //cout<<obj.sameLetter(str, 2);
        cout<<"test: "<<t<<" --> "<<obj.transform(S)<<endl;
        cout<<endl;
    }

    return 0;
}