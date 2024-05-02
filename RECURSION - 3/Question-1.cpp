# include<iostream>
using namespace std;

void reverse(int n,int k){
    if(n==0){
        cout<<k;
        return;
    }
    reverse(n/10,k*10+n%10);

}

int main(){

    int n=564972;
    reverse(n,0);

    return 0;
}