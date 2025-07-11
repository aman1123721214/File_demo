#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<int> selectionSort(vector<int> &num){
        int n = num.size();

        for(int i = 0; i<n; i++){
            for(int j = i; j>0; j--){
                if(num[j-1]>num[j]) 
                    swap(num[j-1], num[j]);
            }
        }
        return num;
    }
};

int main(){
    string str;
    getline(cin, str);
    stringstream ss(str);
    vector<int> num;

    int n;
    while(ss>>n) num.push_back(n);

    Solution obj;
    vector<int> ans = obj.selectionSort(num);

    for(int it: ans) cout<<it<<" ";

    return 0;
}