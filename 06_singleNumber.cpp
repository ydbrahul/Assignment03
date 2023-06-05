#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
        int res=0;
        for(auto x: nums){
           res=res^x;
        }
        return res;
    }

int main(){

    vector<int> nums={2,2,1};
    cout<<singleNumber(nums);

}