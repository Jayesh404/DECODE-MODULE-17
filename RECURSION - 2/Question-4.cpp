# include <bits/stdc++.h>
using namespace std;

void triangleSum(vector<int> v){
    if(v.size()==0) return;
    vector<int> ans;
    int n=v.size();
    for(int i=0;i<n-1;i++){
        ans.push_back(v[i]+v[i+1]);
    }
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    cout<<endl;
    triangleSum(ans);
}

int main(){

    vector<int> v={9,8,7,6,5,4,3,2,1};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    triangleSum(v);

    return 0;
}