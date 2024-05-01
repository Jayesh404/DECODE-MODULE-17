# include <iostream>
using namespace std;

void find(int arr[],int n,int x){
    if(n<0){
        cout<<-1;
        return;
    }
    if(arr[n]==x){
        cout<<"Element present at index : "<<n;
        return;
    }
    find(arr,n-1,x);
    return;
}

int main(){

    int arr[]={1,2,3,4,5,45,24,98,42,68,21,45,86,32,6,82,23,78,43,57};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=2;
    find(arr,n-1,key);
    return 0;
}