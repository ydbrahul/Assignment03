#include<bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=0;
        int mini=INT_MAX;
        int ans=0;
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            int curr=0;

            while(j<k){
                sum=nums[i]+nums[j]+nums[k];
                curr=abs(sum-target);
                if(curr<mini) ans=sum;
                mini=min(curr,mini);
                if(sum==target) return ans;
                if(sum>target) k--;
                if(sum<target) j++;

                
            }

        }
        return ans;
    }

int main(){
    vector<int> nums={-1,2,1,-4};
    int target=1;

    cout<<threeSumClosest(nums,target);
}