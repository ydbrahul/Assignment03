#include<bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int i=n-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]=digits[i]+1;
                return digits;
            }
            digits[i]=0;
        }
        digits.push_back(0);
        digits[0]=1;

        return digits;
        
    }

int main(){

    vector<int> digits={1,2,3};
    digits=plusOne(digits);

    for(auto x: digits) cout<<x<<" ";

    return 0;


}