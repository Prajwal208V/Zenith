#include<iostream>
using namespace std;

int fibMemo(int n, int arr[]){
    if(n<=1){
        arr[n]=n;
        return n;
    }
    else{
        if(arr[n-2]==-1)
            arr[n-2]=fibMemo(n-2,arr);
        if(arr[n-1]==-1)
            arr[n-1]=fibMemo(n-1,arr);
        return arr[n-2]+arr[n-1];
    }
}

int main(){
    int n;
    cout<<"enter I/O: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        arr[i]=-1;
    }
    cout<<"O/P:"<<fibMemo(n,arr)<<endl;

    return 0;
}