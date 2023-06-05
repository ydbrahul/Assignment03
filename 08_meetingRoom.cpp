/*Given an array of meeting time intervals where intervals[i] = [starti, endi],
determine if a person could attend all meetings.

Example 1:
Input: intervals = [[0,30],[5,10],[15,20]]
Output: false*/




#include<bits/stdc++.h>
using namespace std;

bool sol(vector<vector<int>>& interval){
    sort(interval.begin(),interval.end());

    for(int i=1;i<interval.size();i++){
        if(interval[i-1][1]>interval[i][0]) return false;
    }
    return true;
}

int main(){
    vector<vector<int>>interval={{0,30},{5,10},{15,20}};
    cout<<sol(interval);
    return 0;
}
