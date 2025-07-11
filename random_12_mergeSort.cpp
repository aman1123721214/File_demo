#include<bits/stdc++.h>
using namespace std;

class Solution {
private:

    void merge(vector<int> &arr, int low, int mid, int high){
        int left = low, right = mid+1;
        vector<int> temp;

        while(left<=mid && right<=high){
            if(arr[left]<=arr[right])
                temp.push_back(arr[left++]);
            else temp.push_back(arr[right++]);
        }
        while(left<=mid) temp.push_back(arr[left++]);
        while(right<=high) temp.push_back(arr[right++]);


        for(int i = low; i<=high; i++)
            arr[i] = temp[i-low];
    }

    void mS(vector<int> &arr, int low, int high){
        if(low>=high) return;

        int mid = low+(high-low)/2;

        mS(arr, low, mid);
        mS(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
public:
    vector<int> mergeSort(vector<int>& nums) {
        mS(nums, 0, nums.size()-1);
        return nums;
    }
};

int main(){
    string str;
    getline(cin, str);
    stringstream ss(str);

    int n;
    vector<int> num;
    while(ss>>n) num.push_back(n);

    Solution obj;
    vector<int> ans = obj.mergeSort(num);

    for(int it: ans) cout<<it<<" ";

    return 0;
}