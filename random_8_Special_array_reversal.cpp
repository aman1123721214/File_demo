#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string reverse(string str) { 
        //code here.
        int i = 0, j = str.size()-1;

        while(i<j){
            while(i<j && !isalpha(str[i]))i++;
            while(i<j && !isalpha(str[j]))j--;
            swap(str[i], str[j]);
            i++, j--;
        }
        return str;
    } 
};

/*
A&B
A&x#
a#
a*b
*/

int main(){
    int t;  cin>>t;
    while(t--){
        string str;
        cin>>str;

        Solution obj;
        cout<<obj.reverse(str)<<endl;
        cout<<endl;
    }

    return 0;
}