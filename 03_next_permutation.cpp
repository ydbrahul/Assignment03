#include<bits/stdc++.h>
using namespace std;
             
             
 
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int index1=-1;
        
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]) {
                index1=i;
 
                break;
            }
        }
        if(index1==-1) reverse(nums.begin(),nums.end());
        else{ 
           for(int i=n-1;i>=index1;i--){
              if(nums[i]>nums[index1]) {
                swap(nums[i],nums[index1]);
                break;
               }
             
            }
          reverse(nums.begin()+index1+1,nums.end());
        }


    }


int main(){

    vector<int> nums={1,2,3};
    nextPermutation(nums);

    for(auto x: nums) cout<<x<<" ";
    

}