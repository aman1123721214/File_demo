#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to check if a string can be obtained by rotating
    // another string by exactly 2 places.
    bool isRotated(string& s1, string& s2) {
        // Your code here
        int n1 = s1.size();
        int n2 = s2.size();
        if(n1 != n2) return 0;

        bool flag1 = 0, flag2 = 0;
        
        //left_rotation
        int i = 0;
        for(; i<n1; i++){
            if(s2[i] == s1[(i+2)%n1]) continue;
            break;
        }
        if(i == n1) flag1 = 1;

        //right_rotation
        int j = 0; 
        for(; j<n2; j++){
            if(s1[j] == s2[(j+2)%n2]) continue;
            break;
        }
        if(j == n2) flag2 = 1;
        
        return flag1 || flag2;
    }
};

int main(){
    string s1, s2;
    cin>>s1>>s2;

    Solution obj;
    cout<<obj.isRotated(s1, s2);

    return 0;
}
/*
amazon azonam
*/