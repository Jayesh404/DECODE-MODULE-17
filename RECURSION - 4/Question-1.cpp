# include <iostream>
# include<vector>
using namespace std;

void subset(vector<int> proxy,vector<int>& nums,vector<vector<int>>& ans,int idx){
    if(idx==nums.size()){
        ans.push_back(proxy);
        return;
    }
    subset(proxy,nums,ans,idx+1);
    proxy.push_back(nums[idx]);
    subset(proxy,nums,ans,idx+1);
}

int main(){

    vector<int> nums={1,2,3,4};
    vector<int> proxy;
    vector<vector<int>> temp;
    subset(proxy,nums,temp,0);

    return 0;
}