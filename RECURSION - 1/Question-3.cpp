# include <iostream>
using namespace std;

int sum(int a,int b){
    if(b%2==0) b--;
    if(a%2==0) a++;
    if(b==a) return a;
    return b+sum(a,b-2);

}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<sum(a,b);
    return 0;
}