#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string &s1, string &s2) {
        // Your code here
        //if s2 is rotated version of s1 then s2 must be the substring of "s1+s1"
        string temp = s1+s1;
        return temp.find(s2) != string::npos;
        //std::string::npos is a constant defined in the <string> library.
        //It represents an invalid or non-existent position in a string
    }
};
// class Solution {
//   public:
//     // Function to check if two strings are rotations of each other or not.
//     bool areRotations(string &s1, string &s2) {
//         // Your code here
//         string temp = s1;
//         int n = s1.length();

//         int i = 0;
//         while(i++ != n){
//             if(s2 == temp) return 1;
//             char ch = temp[0];
//             temp.erase(temp.begin());
//             temp.push_back(ch);
//         }
//         return 0;
//     }
// };

int main(){
    string s1, s2;  cin>>s1>>s2;

    Solution obj;
    cout<<obj.areRotations(s1, s2);

    return 0;
}