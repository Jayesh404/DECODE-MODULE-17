# include <iostream>
using namespace std;

void print(int arr[],int n){
    if(n<0) return;
    cout<<arr[n]<<" ";
    print(arr,n-1);
}

int main(){

    int arr[5]={1,2,3,4,5};
    print(arr,4);
    return 0;
}