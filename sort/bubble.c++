#include <iostream>
using namespace std;

void bubbleAsce(int arr[],int n){ //ascending 
     for(int i=0; i<n; i++){
         for(int j=1; j<n; j++){

             if(arr[j-1] > arr[j])
                swap(arr[j], arr[j-1]);
         }
     }
}

void bubbleDes(int arr[],int n){  //descending
    for(int i=0; i<n; i++){
         for(int j=1; j<n; j++){

             if(arr[j-1] < arr[j])
                swap(arr[j], arr[j-1]);
         }
     }
}

void print(int arr[],int n){
    for(int i = 0; i < n;i ++)
       cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    int arr[]={4,8,2,7,9,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    bubbleDes(arr,n);
    print(arr,n);
    return 0;
}